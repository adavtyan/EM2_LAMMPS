file=$1
cat ./first_frame_vesicle.lammpstrj | cat - $file > out.tmp && mv out.tmp $file
sed -i '' 's/c_phi\[1\] c_phi\[2\] c_nc/vx vy vz/' $file
