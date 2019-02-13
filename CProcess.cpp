#include "CProcess.h"


CProcess::CProcess(CCore &core) : m_core(core)
{
    
}


void CProcess::init(QString toParse)
{
    m_parsed->setReaded(toParse);
}
