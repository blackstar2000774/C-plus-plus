Complex *addComplex(Complex *c)
        {
            cout<<"I am not this pointer"<<endl;
            c->real=real+c->real;
            c->img=img+c->img;
            return c;
        }