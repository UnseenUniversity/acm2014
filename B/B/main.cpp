#ifdef _MSC_VER
	#define _CRT_SECURE_NO_WARNINGS
#endif

#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>

#include<map>
#include<set>
#include<queue>
#include<stack>
#include<string>
#include<vector>
#include<bitset>
#include<algorithm>
#include<functional>

#include<fstream>
#include<sstream>
#include<iostream>

float inline randf(){
	return ((float)(rand() / (0.0 + RAND_MAX)));
}

float inline randfr( float abs ){
	return ((float)( randf() * 2 - 1 ) * abs );
}

#define likely(x)      __builtin_expect(!!(x), 1)
#define unlikely(x)    __builtin_expect(!!(x), 0)

typedef unsigned int uint;
typedef unsigned char uchar;

const uint inf = 0x3f3f3f3f;

#define DBG_LEVEL 1
#define dbg( level, format, ...) if( level >= DBG_LEVEL ) fprintf (stderr, format, ## __VA_ARGS__)

#define for_each(i,v) \
	for(uint i = 0, sz = v.size(); i < sz; ++i)

#define _for(i,size) \
	for( int i = 0, sz = size; i < sz; ++i )

#define _forf(i,start,end) \
	for( int i = start; i < end; ++i )

#define _forb(i,start,end) \
	for( int i = start; i > end; --i )

template < class T >
std::ostream& operator << (std::ostream& os, const typename std::vector<T>& v) {
	for (typename std::vector<T>::const_iterator ii = v.begin(); ii != v.end(); ++ii){
		os << " " << *ii;	
	}
	os << "\n";
	return os;
}

template < class T >
std::ostream& operator << (std::ostream& os, const typename std::vector< std::pair< T, T > >& v) {
    for (typename std::vector< std::pair< T, T > >::const_iterator ii = v.begin(); ii != v.end(); ++ii){
        os << "(" << *ii->first << " , " << *ii->second << ") ";
    }
	os << "\n";
    return os;
}

#define FILE_IN  "adunare.in"
#define FILE_OUT "adunare.out"

int main(){

	freopen( FILE_IN, "r", stdin );
	freopen( FILE_OUT, "w", stdout );

	int A, B;
	scanf("%d%d\n",&A,&B);
	printf("%d\n", A + B );

	return 0;
}