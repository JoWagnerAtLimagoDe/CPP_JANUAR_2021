#include "abstract_node.h"

abstract_node* abstract_node::get_parent() const
{
	return parent_;
}

void abstract_node::set_parent(abstract_node* parent)
{
	parent_ = parent;
}

std::string abstract_node::get_label() const
{
	return label_;
}

void abstract_node::set_label(const std::string& label)
{
	label_ = label;
}
