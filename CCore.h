#ifndef CCORE_H
#define CCORE_H

#include <memory>
#include "CParser.h"
#include "CProcess.h"
#include "CResolver.h"
#include "CCalculator.h"

//TO DO : Need to do the seters to fulfill those ptr when its needed (Process flag ??)
class CCore
{
public:
    CCore();

    const std::shared_ptr<CParser> &getParserPtr() const;
    const std::shared_ptr<CProcess> &getProcessPtr() const;
    const std::shared_ptr<CResolver> &getResolverPtr() const;
    const std::shared_ptr<CCalculator> &getCalculatorPtr() const;

private:

    std::shared_ptr<CParser>m_parserMgr;
    std::shared_ptr<CProcess>m_processMgr;
    std::shared_ptr<CResolver>m_resolverMgr;
    std::shared_ptr<CCalculator>m_calculatorMgr;
};

#endif // CCORE_H
