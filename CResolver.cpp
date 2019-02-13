#include "CResolver.h"

#include <QDebug>

CResolver::CResolver()
{

}

CPoly::CPoly()
{

}

double CResolver::getDelta() const
{
    return m_delta;
}

void CResolver::setDelta(double a, double b, double c)
{
    m_delta = (b * b - 4.0 * a * c);
    qDebug() << m_delta;
}

void CResolver::solveEquation(CPoly poly)
{
    setDelta(poly.getX(), poly.getY(), poly.getZ());

    if (getDelta() < 0.00)
    {
        //Solution complexe
        // -b-ir/2a
        // -b+ir/2a
        double sqrtDelta = sqrt(getDelta());
        QString tmpSol1 = " '" + QString::number(poly.getY()) + "' - i '"+ QString::number(sqrtDelta)+"' "
                          " / '"+ QString::number(2.0 * poly.getX())+"'";
        QString tmpSol2 = " '" + QString::number(poly.getY()) + "' + i '"+ QString::number(sqrtDelta)+"' "
                          " / '"+ QString::number(2.0 * poly.getX())+"'";

        setComplexeSoluce1(tmpSol1);
        setComplexeSoluce2(tmpSol2);
        qDebug() << tmpSol1 + "Sol 1 discr < 0";
        qDebug() << tmpSol2 + "Sol 1 discr < 0";

    }
    else if (getDelta() == 0.0)
        setOnlySoluce(-poly.getY() / (2.0 * poly.getX()));
    else
    {
        setFirstSoluce(-poly.getY() + sqrt(getDelta()) / (2.0 * poly.getX()));
        setSecondSoluce(-poly.getY() - sqrt(getDelta()) / (2.0 * poly.getX()));
    }
}

QString CResolver::getFirstSoluce() const
{
    return m_sol1;
}

QString CResolver::getSecondSoluce() const
{
    return m_sol2;
}

QString CResolver::getOnlySoluce() const
{
    return m_onlySoluce;
}

QString CResolver::getComplexeSoluce1() const
{
    return m_complexeSoluce1;
}

QString CResolver::getComplexeSoluce2() const
{
    return m_complexeSoluce2;
}

void CResolver::setFirstSoluce(double x1)
{
    m_sol1 = x1;
}

void CResolver::setSecondSoluce(double x2)
{
    m_sol2 = x2;
}

void CResolver::setOnlySoluce(double x0)
{
    m_onlySoluce = x0;
}

void CResolver::setComplexeSoluce1(QString complexeSoluce)
{
    m_complexeSoluce1 = complexeSoluce;
}

void CResolver::setComplexeSoluce2(QString complexeSoluce)
{
    m_complexeSoluce2 = complexeSoluce;
}

double CPoly::getX() const
{
    return m_x;
}

double CPoly::getY() const
{
    return m_y;
}

double CPoly::getZ() const
{
    return m_z;
}

void CPoly::setX(double x)
{
    m_x = x;
}

void CPoly::setY(double y)
{
    m_y = y;
}

void CPoly::setZ(double z)
{
    m_z = z;
}

