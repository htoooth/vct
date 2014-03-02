#include "fmts.cvct.h"

class VCTBlock{ 
public:
	cvct::FilePos start_pos;
	cvct::FilePos end_pos;
};

class VCTObject{

};

class Serialize{
public:
	virtual std::string ToString() = 0;
	virtual void FromString(const std::string val) = 0;
};

class HeadBlock :public VCTBlock{

};

class FeatureInfoBlock :public VCTBlock{

};

class FeatureCodeBlock :public VCTBlock{
public:
	std::vector<FeatureInfoBlock> featureInfo;
};

class TableBlock :public VCTBlock{

};

class GeometryBlock :public VCTBlock
{

};

class PointBlock :public GeometryBlock{

};
class LineBlock :public GeometryBlock{

};
class PolygonBlock : public GeometryBlock{

};
class AttributeBlock :public VCTBlock{

};

class Archive{
public:
	virtual void write(const void * buffer, size_t length){}
	virtual void read(void * buffer, size_t length){}
};

class VCTFile
{
public:
	HeadBlock *head;
	FeatureCodeBlock* featureCode;
	TableBlock * tableStructure;
	PointBlock * point;
	LineBlock * line;
	PolygonBlock * polygon;
	AttributeBlock * attribute;
private:

};