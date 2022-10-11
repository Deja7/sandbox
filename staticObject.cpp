#include "staticObject.h"

staticObject::staticObject(sx::vec start, sx::vec end)
{
	p1 = start;
	p2 = end;
	box = p2;
	box.subtract(p1);
}
