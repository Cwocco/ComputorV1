#ifndef CPARSER_H
#define CPARSER_H

#include <QString>
#include <QChar>
#include <QDebug>
/*

$>./computor "5 * X^0 + 4 * X^1 - 9.3 * X^2 = 1 * X^0"
Reduced form: 4 * X^0 + 4 * X^1 - 9.3 * X^2 = 0
Polynomial degree: 2
Discriminant is strictly positive, the two solutions are:
0.905239
-0.475131
$>./computor "5 * X^0 + 4 * X^1 = 4 * X^0"
Reduced form: 1 * X^0 + 4 * X^1 = 0
Polynomial degree: 1
The solution is:
-0.25
./computor "8 * X^0 - 6 * X^1 + 0 * X^2 - 5.6 * X^3 = 3 * X^0"
Reduced form: 5 * X^0 - 6 * X^1 + 0 * X^2 - 5.6 * X^3 = 0
Polynomial degree: 3
The polynomial degree is stricly greater than 2, I can't solve.

 * */
class CProcess;

class CParser
{
public:
    CParser();

    void    setDegree(int degree);
    int     getDegree() const;

    void    setReaded(QString readed);
    QString getReaded() const;

    void    setParsed(QString parsed);
    QString getParsed() const;

    int     checkDegree(QChar degree) const;
    int     checkExposant(QChar exposant) const;
    int     checkEq(QChar eq) const;
    int     checkSign(QChar sign) const;
    int     checkX(QChar x) const;
    int     checkNumber(QChar nb) const;
    //int     avoidSpaces(QChar spaces) const;

    int     entryPointCheck(QString toParse, int index) const;
    int     globalCheck(QString toParse, int index) const;
    int     readnParse();

protected:

    CProcess & m_process;

private:

    QString m_readed;
    QString m_parsed;
    int     m_degree;
};

#endif // CPARSER_H
