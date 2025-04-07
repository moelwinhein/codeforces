#!/bin/bash

project=$1
mkdir "${project}"
cp template/* "${project}/."
sed -i "" "s/TEMPLATE_PROJECT_NAME/${project}/g" $project/CMakeLists.txt
