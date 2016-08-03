#include <winsock2.h>
#include <ws2tcpip.h>
#include <string>

using std::string;

// IP for this host computer
static const string IP_ADDR = "192.168.1.44";

class Stream {
	SOCKET s;
	struct sockaddr_in addr;
	struct sockaddr_in bind_addr;
	void handleError(int err/*, string message */);
public:
	Stream(PCSTR ip, int server_port, bool multicast);
	void send(char* packet, int length);
	string getIP();
	~Stream();
};