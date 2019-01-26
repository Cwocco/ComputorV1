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

int CParser::checkDegree(QChar degree) const
{
    return (degree == '0' || degree == '1' || degree == '2' ? 1 : 0);
}

int CParser::checkExposant(QChar exposant) const
{
    return (exposant == '^' ? 1 : 0);
}


