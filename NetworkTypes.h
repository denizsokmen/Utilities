#ifdef WIN32
#include <WinSock.h>
#pragma comment(lib, "Ws2_32.lib")
#else
#include <netinet/in.h>
#endif

#include <stdint.h>


struct NET32 {
	int32_t  value;
	operator int32_t () const
	{
		return( ntohl(value) );
	}
	NET32 & operator = ( int32_t val )
	{
		value = htonl( val );
		return( * this );
	}
};

struct NET16 {
	int16_t  value;
	operator int16_t () const
	{
		return( ntohs(value) );
	}
	NET16 & operator = ( int16_t val )
	{
		value = htons( val );
		return( * this );
	}
};

