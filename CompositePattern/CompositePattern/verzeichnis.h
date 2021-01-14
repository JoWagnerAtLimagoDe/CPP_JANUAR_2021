#pragma once
#include "abstract_node.h"
class verzeichnis :
    public abstract_node
{
	std::vector<abstract_node *> children;

public:
	verzeichnis(const std::string& label):abstract_node(label){}


	std::vector<abstract_node *> get_children() override
	{
		return children;
	}

	void append_child(abstract_node * child)
	{
		child->set_parent(this);
		children.push_back(child);
	}

	void ausgabe() override
	{
		std::cout << "Verzeichnis: ";
		abstract_node::ausgabe();

	}
};

