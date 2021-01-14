#pragma once
#include <iostream>
#include <string>
#include <vector>
class abstract_node
{
	abstract_node* parent_;
	std::string label_;
public:
	abstract_node(const std::string &label):parent_(nullptr), label_(label){}

	virtual std::vector<abstract_node *> get_children()
	{
		return std::vector<abstract_node *>{};
	}


	abstract_node* get_parent() const;
	void set_parent(abstract_node* parent);
	std::string get_label() const;
	void set_label(const std::string& label);

	virtual void ausgabe()
	{
		std::cout << "parent_: " << parent_
			<< " label_: " << label_ << std::endl;
	}
	
};

