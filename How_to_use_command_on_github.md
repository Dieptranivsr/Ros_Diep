### Upload folders on github 
 * git init
 * git add <folder1> <folder2> <etc.>
 * git commit -m "Your message about the commit"
 * git remote add origin https://github.com/yourUsername/yourRepository.git
 * git push -u origin master
 * git push origin master  


### Rename folder on Github
 * Clone your repository that you website is hosted on.
 * cd “repositoryname”
 * git mv “directoryname” “newdirectoryname”
 * git add .
 * git commit -m “message”
 * git push

### The steps for doing this are:

In the command-line, navigate to your local repository.
Ensure you are in the default branch:
 * git checkout master
The rm -r command will recursively remove your folder:
 * git rm -r folder-name
Commit the change:
 * git commit -m "Remove duplicated directory"
Push the change to your remote repository:
 * git push origin master
