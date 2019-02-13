#include "CParser.h"

CParser::CParser()
{

}

void CParser::setDegree(int degree)
{
    m_degree = degree;
}

int CParser::getDegree() const
{
    return m_degree;
}

void CParser::setReaded(QString readed)
{
    m_readed = readed;
}

QString CParser::getReaded() const
{
    return m_readed;
}

void CParser::setParsed(QString parsed)
{
    m_parsed = parsed;
}

QString CParser::getParsed() const
{

}

int CParser::checkDegree(QChar degree) const
{
    return (degree == '0' || degree == '1' || degree == '2' ? 1 : 0);
}

int CParser::checkExposant(QChar exposant) const
{
    return (exposant == '^' ? 1 : 0);
}

int CParser::checkEq(QChar eq) const
{
    return (eq == '=' ? 1 : 0);
}

int CParser::checkSign(QChar sign) const
{
    return (sign == '-' || sign == '+' || sign == '*' ? 1 : 0);
}

int CParser::checkX(QChar x) const
{
    return (x == 'X' ? 1 : 0);
}

int CParser::checkNumber(QChar nb) const
{
    return (nb >= '0' && nb <= '9' ? 1 : 0);
}

int CParser::entryPointCheck(QString toParse, int index) const
{
    if (toParse.size() > 0 && index)
    {
        checkNumber(toParse[index]);
        checkSign(toParse[index]);
        checkX(toParse[index]);
        checkExposant(toParse[index]);
        checkDegree(toParse[index]);
        checkEq(toParse[index]);
        return (1);
    }
    return (0);
}

int CParser::globalCheck(QString toParse, int index) const
{
    return (entryPointCheck(toParse, index));
}

int CParser::readnParse()
{
    int strSize;
    int i;
    QString tmp;

    strSize = getReaded().size();
    tmp = getReaded();
    qDebug() << strSize;
    i = 0;

    while (i < strSize - 1)
    {
        if (tmp[i] == ' ' || tmp[i] == '\t')
            i++;
        if (globalCheck(tmp, i))
            i++;
    }

    setReaded(toParse);
    qDebug() << getReaded();

    return 0;
}

























