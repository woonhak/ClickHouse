#pragma once

#include <DB/Parsers/IParserBase.h>


namespace DB
{

/** Запрос типа такого:
  * SHOW TABLES [FROM db] [[NOT] LIKE 'str']
  * или
  * SHOW DATABASES.
  */
class ParserShowTablesQuery : public IParserBase
{
protected:
	const char * getName() const { return "SHOW TABLES|DATABASES query"; }
	bool parseImpl(Pos & pos, Pos end, ASTPtr & node, const char *& expected);
};

}
