

#!/bin/bash



#low_level_programming



git clone https://github.com/Imoudumicheal/alx-low_level_programming

# git clone https://github.com/KNehe/alx-low_level_programming

# git clone https://github.com/stephenrabbi/alx-low_level_programming

# cp -r ./alx-system_engineering-devops/0x02-shell_redirections/* .

# cp -r ./alx-low_level_programming/0x01-variables_if_else_while/* .

# echo -e '# 0x01-variables_if_else_while' > README.md



cp -r ./alx-low_level_programming/0x02-functions_nested_loops/* .

echo -e '# 0x02-functions_nested_loops' > README.md



git add .

git commit -m 'Create README'

git push



# cp -r ./alx-low_level_programming/0x02-functions_nested_loops/* .

# echo -e '# 0x02-functions_nested_loops' > README.md



# cp -r ./alx-low_level_programming/0x00-hello_world/* .

# echo -e '# Start of C in alx \n ## 0x00-hello_world' > README.md



# git add README.md

# git commit -m 'create readme'

# git push



rm -r alx-low_level_programming



ls > alt





LINES=$(cat alt)

echo -e 'alt\nauto.sh\nauto.sh~' > .gitignore



# echo -e '# Variables and if else modules for C in alx \n ## (0x01-variables_if_else_while)' > README.md









for LINE in $LINES
	    

	    
do
    

    
    if [ "$LINE" != 'auto.sh' ]; then
	

	
        echo "$LINE"
	

	
        git add $LINE
	

	
        git commit -m  "$LINE"
	

	
        git push
	

	
    else
	

	
        echo "At auto.sh"
	
    fi
    

    
    # sleep 2
    

    
done



rm alt auto.sh auto.sh~ .gitignore

echo '~' > .gitignore



git add .

git commit -m '.gitignore added'

git push





# https://stackoverflow.com/questions/52901012/what-is-a-list-in-bash
