#include "CCore.h"

#include <QDebug>

CCore::CCore()
{
    //construct CParser object // Update : I will not put CParser here
    //construct CResolver object
    qDebug() << "Constructor";

    m_parserMgr = std::make_shared<CParser>(*this);
    m_processMgr = std::make_shared<CProcess>(*this);
    m_resolverMgr = std::make_shared<CResolver>(*this);
    m_calculatorMgr = std::make_shared<CCalculator>(*this);
}

const std::shared_ptr<CParser> &CCore::getParserPtr() const
{
    return (m_parserMgr);
}

const std::shared_ptr<CProcess> &CCore::getProcessPtr() const
{
    return (m_processMgr);
}

const std::shared_ptr<CResolver> &CCore::getResolverPtr() const
{
    return (m_resolverMgr);
}

const std::shared_ptr<CCalculator> &CCore::getCalculatorPtr() const
{
    return (m_calculatorMgr);
}
