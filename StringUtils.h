/* Do not edit this file. It was automatically generated. */

#ifndef HEADER_StringUtils
#define HEADER_StringUtils
/*
htop - String.h
(C) 2004-2011 Hisham H. Muhammad
Released under the GNU GPL, see the COPYING file
in the source distribution for its full text.
*/

#define String_startsWith(s, match) (strstr((s), (match)) == (s))
#define String_contains_i(s1, s2) (strcasestr(s1, s2) != NULL)

char* String_cat(const char* s1, const char* s2);

char* String_trim(const char* in);

extern int String_eq(const char* s1, const char* s2);

char** String_split(const char* s, char sep, int* n);

void String_freeArray(char** s);

char* String_getToken(const char* line, const unsigned short int numMatch);

#endif