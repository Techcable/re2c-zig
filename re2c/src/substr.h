/* $Id$ */
#ifndef _substr_h
#define _substr_h

#include <iostream>
#include <string>
#include <string.h>

#include "config.h"
#include "src/c99_stdint.h"

namespace re2c
{

class SubStr
{
public:
	const char * str;
	const char * const org;
	uint32_t len;

public:
	friend bool operator==(const SubStr &, const SubStr &);
	SubStr(const uint8_t *, uint32_t);
	SubStr(const char*, uint32_t);
	explicit SubStr(const char*);
	SubStr(const SubStr&);
	virtual ~SubStr();
	void out(std::ostream&) const;
	std::string to_string() const;
	uint32_t ofs() const;

#ifdef PEDANTIC
protected:
	SubStr& operator = (const SubStr& oth);
#endif
};

class Str: public SubStr
{
public:
	explicit Str(const char*);
	Str(const SubStr&);
	Str();
	virtual ~Str();
};

inline std::ostream& operator<<(std::ostream& o, const SubStr &s)
{
	s.out(o);
	return o;
}

inline std::ostream& operator<<(std::ostream& o, const SubStr* s)
{
	return o << *s;
}

inline SubStr::SubStr(const uint8_t *s, uint32_t l)
		: str((char*)s), org((char*)s), len(l)
{ }

inline SubStr::SubStr(const char *s, uint32_t l)
		: str(s), org(s), len(l)
{ }

inline SubStr::SubStr(const char *s)
		: str(s), org(s), len(strlen(s))
{ }

inline SubStr::SubStr(const SubStr &s)
		: str(s.str), org(s.str), len(s.len)
{ }

inline SubStr::~SubStr()
{ }

inline std::string SubStr::to_string() const
{
	return str && len ? std::string(str, len) : std::string();
}

inline uint32_t SubStr::ofs() const
{
	return str - org;
}

#ifdef PEDANTIC
inline SubStr& SubStr::operator = (const SubStr& oth)
{
	new(this) SubStr(oth);
	return *this;
}
#endif

} // end namespace re2c

#ifndef HAVE_STRNDUP

char *strndup(const char *str, size_t len);

#endif

#if defined(_MSC_VER) && !defined(vsnprintf)
#define vsnprintf _vsnprintf
#endif

#endif