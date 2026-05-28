`-rw-rw-r-- 1 brian brian   46 May 28 08:44 helloworld.sh`

`-rwxrwxr-x 1 brian brian   46 May 28 08:44 helloworld.sh`

- First 10 spacews: first is directory flag, next 3 is user permissions, next
3 is group permissions, next 3 is others permissions
- In order, skip 1, file owner, file group, file size, last modified date, file or directory name
- Triplets are `-, r, w, x`
  - Letters represent a **bit mask**
  - Each item of the triplet is either 0 or 1, 0 is 0
  - `r--` equivalent to 100<sub>2</sub> => 4<sub>10</sup>
  - `r-x` equivalent to 101<sub>2</sub> => 5<sub>10</sub>
  - `rw-` equivalent to 110<sub>2</sub> => 6<sub>10</sub>
  - `rwx` equivalent to 111<sub>2</sub> => 7<sub>10</sub>

- Can execute commands using a **Subshell**

````bash
echo $( command )
````