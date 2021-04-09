#include <iostream>

#include <iostream>
#include <string>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>


using namespace std;
using namespace cv;
Mat L = imread("C:\\OpenCV2.4.6\\ýþýk.jpg");
Mat blobDetection(Mat binaryIMG){ //function to do objectextraction
int binaryIMG_Height = binaryIMG.rows, binaryIMG_Width = binaryIMG.cols, pixValue, blobSize = 0, objectSize = 0;
Mat objectImage;
for(int x = 0; x < binaryIMG_Width; x++){
    for(int y = 0; y < binaryIMG_Height; y++){
    pixValue = binaryIMG.at<unsigned char>(x,y);
    if(pixValue > 0){
    blobSize++;
    }
    }


}
// initialize arrays for holding coordinate values
int blobXCoordinates[blobSize], blobYCoordinates[blobSize];


//fill in the coordinate values
for(int x = 0; x < binaryIMG_Width; x++){
    int i = 0;
    int xCoordinate, yCoordinate;
    for(int y = 0; y < binaryIMG_Height; y++){
    pixValue = binaryIMG.at<unsigned char>(x,y);
    if(pixValue == 255){
    blobXCoordinates[i] = x;
    blobYCoordinates[i] = y;
    i++;
    }
    }
}
int k = waitKey();
namedWindow("Super Ninjalar");
imshow("Super Ninjalar", L);
return 0 ;
	
}
