class BrowserHistory {
public:
    string homepage;
    vector<string>p;
    int i=0;
    BrowserHistory(string homepage) {
        this->homepage=homepage;
        p.push_back(homepage);
        i=0;
    }
    
    void visit(string url) {
        p.erase(p.begin()+i+1,p.end());
        p.push_back(url);
        i=p.size()-1;
        
    }
    
    string back(int steps) {
        i=i-steps;
        if(i<0)i=0;
        return p[i];
    }
    
    string forward(int steps) {
        i=i+steps;
        if(i>=p.size())i=p.size()-1;
        return p[i];
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */