#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <unistd.h>
#include <dirent.h>
#include <sys/stat.h>

ShrubberyCreationForm::ShrubberyCreationForm() {}
ShrubberyCreationForm::~ShrubberyCreationForm() {}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &shrubberyCreationForm) {
	*this = shrubberyCreationForm;
}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &shrubberyCreationForm) {
	if (this == &shrubberyCreationForm)
		return *this;
	return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form("ShrubberyCreationForm", false, 145, 137, target) {}

void	printTree (char *path, int depth, std::ofstream &fd) 
{
	DIR *dir;
	struct dirent *ent;
	dir = opendir (path);
	if (dir == NULL)
		return;

	int skip = 0;
	while ((ent = readdir (dir)) != NULL) {
		if (skip > 1)
		{
			std::string npath = path;
			npath.append("/");
			npath.append(ent->d_name);
			struct stat s;
			if( stat(&npath[0],&s) == 0 )
			{
				for (int i = 0; i < depth; i++)
					fd << "| ";
				fd << "|-";
				if( s.st_mode & S_IFDIR )
				{
					fd << ent->d_name << "/" << std::endl;
					printTree(&npath[0], depth + 1, fd);
				}
				else if( s.st_mode & S_IFREG )
				{
					fd << ent->d_name << std::endl;
				}
			}
		}
		skip++;
	}
	closedir(dir);
}

void ShrubberyCreationForm::action() const {
	std::cout << "Creating " << getTarget() << "_shrubbery..\n";
	std::ofstream fd;
	std::string target = this->getTarget() + "_shrubbery";
	fd.open(&target[0]);
	if (!fd.is_open())
		std::cout << "error\n";
	else
	{
		printTree(getcwd(NULL,0), 0, fd);
		fd.close();
	}
}
