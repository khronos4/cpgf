#ifndef __BUILDERCONTAINER_H
#define __BUILDERCONTAINER_H

#include "builderitem.h"

#include <vector>


class BuilderContainer : public BuilderItem
{
private:
	typedef BuilderItem super;
	
protected:
	typedef std::vector<BuilderItem *> ItemListType;
	
public:
	explicit BuilderContainer(const CppItem * cppItem);
	virtual ~BuilderContainer();
	
	ItemListType * getItemList() { return &this->itemList; }
	const ItemListType * getItemList() const { return &this->itemList; }

	void sortItems();
	
private:
	ItemListType itemList;
};

#endif
