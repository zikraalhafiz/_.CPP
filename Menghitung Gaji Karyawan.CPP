
            tunjpend = 0;
            break;
    }

    if(jumjamker < 8 || jumjamker > 24)
    {
        holem = 0;
    }
    else
    {
        holem = (jumjamker - 8) * 3500;
    }

    cout<<"\n\nKaryawan yang bernama  "<<nama<<endl;
    cout<<"\nHonor yang diterima    "<<endl;
    cout<<"\n\tTunjangan Jabatan         Rp. "<<tunjab<<endl;
    cout<<"\n\tTunjangan Pendidikan         Rp. "<<tunjpend<<endl;
    cout<<"\n\tHonor Lembur             Rp. "<<holem<<endl;
       cout<<"\n\t\t\t\t\t-----------+";
    total = tunjab + tunjpend + holem;
    cout<<"\n\tTotal                Rp. "<<total<<endl;

getch();
}
