class Solution {
public:
    double radius,x_center,y_center;
    Solution(double radius, double x_center, double y_center) {
        this->radius =radius;
        this->x_center=x_center;
        this->y_center =y_center;
    }
    double random(){
  return double(rand())/RAND_MAX;  //bw [0,1];
    }
    vector<double> randPoint() {
        vector<double>ans(2);
        double theta = 2*M_PI*random();
        double Rradius = radius*sqrt(random());  //sqrt for generating uniform points
        
        ans[0]= x_center + Rradius*cos(theta);
        ans[1]=y_center+Rradius*sin(theta);
        return ans;
    }
};
