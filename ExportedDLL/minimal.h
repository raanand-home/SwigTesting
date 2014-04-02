//minimal.h
class minimal
{
private:
    static int num_instances;
 
public:
	int Add(int a, int b)
	{
		return a + b;
	}
    minimal()
    {
        ++num_instances;
    }
    ~minimal()
    {
        --num_instances;
    }
 
    void print_num_instances();
};