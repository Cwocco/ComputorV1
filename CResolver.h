#ifndef CRESOLVER_H
#define CRESOLVER_H

#include <QString>
#include <math.h>


class CPoly
{
public:
    CPoly();

    double getX() const;
    double getY() const;
    double getZ() const;

    void setX(double x);
    void setY(double y);
    void setZ(double z);

private:

    double m_x;
    double m_y;
    double m_z;
};


class CResolver
{
public:
    CResolver();

    double getDelta() const;
    void    setDelta(double a, double b, double c);

    // Discriminant > 0
    QString getFirstSoluce() const;
    QString getSecondSoluce() const;

    void    setFirstSoluce(double x1);
    void    setSecondSoluce(double x2);

    //
    //
    QString getOnlySoluce() const; // Discriminant = 0;
    void    setOnlySoluce(double x0);

    //
    //
    QString getComplexeSoluce1() const; // Discriminant < 1
    QString getComplexeSoluce2() const; // Discriminant < 1
    void    setComplexeSoluce1(QString complexeSoluce);
    void    setComplexeSoluce2(QString complexeSoluce);
    //

    void    solveEquation(CPoly poly);


private:

    double m_delta = 0;
    double m_sol1 = 0;
    double m_sol2 = 0;
    double m_onlySoluce = 0;
    QString m_complexeSoluce1 = "";
    QString m_complexeSoluce2 = "";

};


#endif // CRESOLVER_H
