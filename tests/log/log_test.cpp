#include "../../include/log.hpp"


int main(int argc, char ** argv)
{
    ws::log log;

	log.debug ( "haha" );
    log.debug( "haha: {0}", "xiaowu" );
    return 0;
}