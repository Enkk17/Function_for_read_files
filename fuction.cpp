string file_content() 
{
	// filestream variables 
    fstream file;
    string filename;
 
    // we declare filename which corresponds to the file we want to open
    filename = "test.txt";
 
    //open the file
    file.open(filename.c_str());
  	
	// create a stringstream
	stringstream buffer;  
	
	//passes the file buffer to the stringstream
	buffer << file.rdbuf();

	//reading the file
	return buffer.str(); 
  	
}
