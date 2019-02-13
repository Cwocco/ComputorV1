#ifndef CPROCESS_H
#define CPROCESS_H

#include <memory>
#include "CParser.h"
#include "CResolver.h"
#include "CCalculator.h"

class CCore;

class CProcess
{
public:
    CProcess(CCore &core);

    void init(QString toParse);

protected:

    CCore & m_core;

private:

    std::shared_ptr<CParser>m_parsed;
    std::shared_ptr<CProcess>m_process;
    std::shared_ptr<CResolver>m_resolver;
    std::shared_ptr<CCalculator>m_calculator;


};

#endif // CPROCESS_H
