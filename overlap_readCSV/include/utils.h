#ifndef UTILS_H
#define	UTILS_H

#include "logger.h"
#include "node.h"
#include "heap_min.h"
#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <vector>
#include <set>
#include <list>
#include <sys/stat.h>
#include<tuple>
#include<unordered_set>
#include<algorithm>
#include <forward_list>
#include <sstream>

#define BUFFER_SIZE 4096

using namespace std;

static bool first_write = false;

extern string output_path;
extern fstream main_file;

struct statistics_data{
	int  times;
	char *values;
	statistics_data(int times, char *values) : times(times), values(values) {}
};

unsigned int read_file(Heap_min *h, string path, int64_t *min_timestamp);
void remove_duplicates(const vector<Node*>& nodes, int (Node::*functionPtr)(), vector<int>&v);
inline bool file_exists (const char filename[]);
void dump_file(int64_t start, int64_t new_end, const vector<Node*>& nodes);
void dump_dict(string path, const vector<string>&v);
inline statistics_data extract_statistics(const vector<int> &v);
bool nodes_equals_compare(Node* lhs,  Node* rhs);

#endif
