#ifndef __MYUN2__LEXICAL__PRESETS__XML__DOM__HPP__
#define __MYUN2__LEXICAL__PRESETS__XML__DOM__HPP__

#include <string>
#include <vector>

namespace myun2
{
	namespace lexical
	{
		namespace xml
		{
			enum node_type {
				attribute_node,
				element_node,
				text_node,
				comment_node,
			};

			struct node {
				node_type type;
				node(node_type nt) : type(nt) {}
			};

			struct attribute : node {
				::std::string name;
				::std::string value;
				attribute() : node(attribute_node) {}
				attribute(const ::std::string& name_, const ::std::string& value_) :
					node(attribute_node), name(name_), value(value_) {}
			};

			struct comment : node {
				::std::string value;
				comment() : node(comment_node) {}
				comment(const ::std::string& value_) :
					node(comment_node), value(value_) {}
			};

			struct text : node {
				::std::string value;
				text() : node(text_node) {}
				text(const ::std::string& value_) :
					node(text_node), value(value_) {}
			};
			
			struct element : node {
				::std::string name;
				//::std::vector<attribute> attributes;
				::std::map<::std::string, ::std::string> attributes;

				/*::std::vector<text> text_nodes;
				::std::vector<comment> comment_nodes;
				::std::vector<tag> tag_nodes;
				struct _sub_node {
					node_type type;
					unsigned int index;
				}*/
				::std::vector<node*> nodes;

				element() : node(element_node) {}
				element(const ::std::string& name_) :
					node(element_node), name(name_) {}
				void free_nodes() {
					for(int i=0; i<nodes.size(); i++)
						delete nodes[i];
				}
			};
			
			struct document {
				element root_element;
			};
		}
	}
}

#endif//__MYUN2__LEXICAL__PRESETS__XML__DOM__HPP__
