
class Product
{
	public :
	string name;
	  
	private:  
	int price;

	public:
	void display()
	{
	  	cout <<name <<" "  << price << endl;
	}    

	void setPrice(int p,int password)
	{
		if(password == 123)
		{
	    	if(p < 0)
		    {
			 cout << "setPrice  carefully" << endl;
	    	}
		    else
		    {
		     price = p;
		    }
	    }
	    else
	    {
	    	cout << "Unauthorized People" << endl;
	    }
	}

	int getPrice()
	{
		return price;
	}  

};