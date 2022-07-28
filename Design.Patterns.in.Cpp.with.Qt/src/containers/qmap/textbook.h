#ifndef _TEXTBOOK_H_
#define _TEXTBOOK_H_

#include <QObject>
#include <QString>
#include <QMap>
#include <QDebug>

class Textbook : public QObject {
    Q_OBJECT
  public:
    Textbook(QString title, QString author, QString isbn, uint year)
        : m_YearPub(year), m_Title(title), m_Author(author), m_Isbn(isbn)
    {
    }

//end
    QString getAuthor() const { return m_Author; }
    QString getTitle() const { return m_Title; }
    QString getIsbn() const { return m_Isbn; }
    uint getYearPub() const { return m_YearPub; }
    QString toString() const
    {
        QString retval;
        QTextStream os(&retval);
        os << "Title: " << m_Title << "; "
            << "Author: " << m_Author << "; "
            << "ISBN: " << m_Isbn << "; "
            << "Year: " << m_YearPub;
        return retval;
    }

public slots:
    void setTitle(const QString& newTitle)
    {
        m_Title = newTitle;
    }

    void setIsbn(const QString &newIsbn)
    {
        m_Isbn = newIsbn;
    }

    void setYearPub(uint newYear)
    {
        m_YearPub = newYear;
    }

    void setAuthor(const QString& newAuthor)
    {
        m_Author = newAuthor;
    }

//start
private:
    uint m_YearPub;
    QString m_Title, m_Author, m_Isbn;
};

/* Managed collection of pointers */
class TextbookMap : public QMap<QString, Textbook*> {
  public:
    ~TextbookMap();
    /** Adds the TextBook to the map, keyed on the ISBN */
    void add(Textbook* text);

    QString toString() const;
};
#endif
