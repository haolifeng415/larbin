#ifndef LARBIN_CONFIG
#define LARBIN_CONFIG

#define HAS_PROC_SELF_STATUS

// how do you want to manage specific pages (select one of the followings)
//#define DEFAULT_SPECIFIC
#define SAVE_SPECIFIC
//#define DYNAMIC_SPECIFIC

// do you want to follow links in pages
#define FOLLOW_LINKS

// do you want the crawler to associate to each page the list of its sons
//#define LINKS_INFO

// do you want to associate a tag to pages (given in input)
// this allows to follow a page from input to output (and follow redirection)
//#define URL_TAGS

// do we need a special thread for output
// This is compulsory if it can block
// (not needed if you did not add code yourself)
//#define THREAD_OUTPUT

// Please enable this option if you want to report a crash
// then compile with "make debug"
//#define CRASH

#endif // LARBIN_CONFIG
