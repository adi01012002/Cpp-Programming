#include<bits/stdc++.h>
using namespace std;
// gives memory and time Limit exceed in leecode 
void help(vector<int>&v,vector<int>res,int idx,int &len){
    if(idx>=v.size()){
        bool flag=true;
        for(int i=2;i<res.size();i++){
            if(res[i]!=res[i-1]+res[i-2]){
                flag=false;
                break;
            }
        }
        if(flag==true) len=max(len,(int)res.size());
        // if (flag == true) len = max(len, (int)res.size());
        return;
    }
    help(v,res,idx+1,len);
    res.push_back(v[idx]);
    help(v,res,idx+1,len);
}
int lenLongestFibSubseq(vector<int>&v){
    int n=v.size();
    unordered_map<int,int>idx;
    unordered_map<int,int>dp;
    int maxLen=0;
    for(int i=0;i<v.size();i++){
        idx[v[i]]=i;
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int x=v[i];
            int y=v[j];
            int len=2;
            while(idx.find(x+y)!=idx.end()){
                int z=x+y;
                x=y;
                y=z;
                len++;
            }
            maxLen=max(len,maxLen);
        }
    }
    return maxLen;
}
int main(){
    vector<int>v={52,54,65,77,78,80,83,106,123,144,146,160,162,204,207,209,217,223,227,240,266,267,273,307,343,357,361,369,406,419,426,431,433,470,473,509,534,540,564,592,621,651,677,678,679,692,700,735,742,745,748,752,757,769,789,811,830,831,841,852,858,876,887,891,910,913,920,937,938,940,952,961,972,1053,1057,1070,1118,1142,1150,1158,1179,1297,1303,1309,1322,1375,1395,1419,1449,1474,1553,1556,1558,1565,1579,1593,1631,1682,1689,1721,1757,1810,1910,1939,1944,2054,2060,2080,2133,2151,2161,2174,2185,2216,2226,2367,2389,2410,2414,2451,2452,2495,2514,2583,2595,2609,2791,2814,2928,2997,3068,3089,3210,3222,3330,3351,3436,3494,3496,3580,3591,3621,3838,3888,3923,3989,4017,4044,4053,4067,4214,4277,4298,4512,4571,4738,4941,4978,5028,5270,5302,5405,5481,5569,5670,5679,5741,5807,5847,6227,6290,6302,6399,6469,6495,6548,6581,6797,6872,6907,7303,7385,7666,7938,8046,8117,8480,8524,8756,8811,9005,9166,9173,9321,9398,9468,10065,10190,10213,10388,10486,10539,10601,10648,11011,11149,11205,11815,11956,12404,12879,13024,13145,13750,13826,14161,14292,14574,14836,14852,15062,15205,15315,16292,16492,16503,16787,16955,17034,17149,17229,17808,18021,18112,19118,19341,20070,20817,21070,21262,22230,22350,22917,23103,23579,24002,24025,24383,24603,24783,26357,26682,26716,27175,27441,27573,27750,27877,28819,29170,29317,30933,31297,32474,33696,34094,34407,35980,36176,37078,37395,38153,38838,38877,39445,39808,40098,42649,43174,43219,43962,44396,44607,44899,45106,46627,47191,47429,50051,50638,52544,54513,55164,55669,58210,58526,59995,60498,61732,62840,62902,63828,64411,64881,69006,69856,69935,71137,71837,72180,72649,72983,75446,76361,76746,80984,81935,85018,88209,89258,90076,94190,94702,97073,97893,99885,101678,101779,103273,104219,104979,111655,113030,113154,115099,116233,116787,117548,118089,122073,123552,124175,131035,132573,137562,142722,144422,145745,152400,153228,157068,158391,161617,164518,164681,167101,168630,169860,180661,182886,183089,186236,188070,188967,190197,191072,197519,199913,200921,212019,214508,222580,230931,233680,235821,246590,247930,254141,256284,261502,266196,266460,270374,272849,274839,292316,295916,296243,301335,304303,305754,307745,309161,319592,323465,325096,343054,347081,360142,373653,378102,381566,398990,401158,411209,414675,423119,430714,431141,437475,441479,444699,472977,478802,479332,487571,492373,494721,497942,500233,517111,523378,526017,555073,561589,582722,604584,611782,617387,645580,649088,665350,670959,684621,696910,697601,707849,714328,719538,765293,774718,775575,788906,796676,800475,805687,809394,836703,846843,851113,898127,908670,942864,978237,989884,998953,1044570,1050246,1076559,1085634,1107740,1127624,1128742,1145324,1155807,1164237,1238270,1253520,1254907,1276477,1289049,1295196,1303629,1309627,1353814,1370221,1377130,1453200,1470259,1525586,1582821,1601666,1616340,1690150,1699334,1741909,1756593,1792361,1824534,1826343,1853173,1870135,1883775,2003563,2028238,2030482,2065383,2085725,2095671,2109316,2119021,2190517,2217064,2228243,2351327,2378929,2468450,2561058,2591550,2615293,2734720,2749580,2818468,2842227,2900101,2952158,2955085,2998497,3025942,3048012,3241833,3281758,3285389,3341860,3374774,3390867,3412945,3428648,3544331,3587285,3605373,3804527,3849188,3994036,4143879,4193216,4231633,4424870,4448914,4560377,4598820,4692462,4776692,4781428,4851670,4896077,4931787,5245396,5309996,5315871,5407243,5460499,5486538,5522261,5547669,5734848,5804349,5833616,6155854,6228117,6462486,6704937,6784766,6846926,7159590,7198494,7378845,7441047,7592563,7728850,7736513,7850167,7922019,7979799,8487229,8591754,8601260,8749103,8835273,8877405,8935206,8976317,9279179,9391634,9438989,9960381,10077305,10456522,10848816,10977982,11078559,11584460,11647408,11939222,12039867,12285025,12505542,12517941,12701837,12818096,12911586,13732625,13901750,13917131,14156346,14295772,14363943,14457467,14523986,15014027,15195983,15272605,16116235,16305422,16919008,17553753,17762748,17925485,18744050,18845902,19318067,19480914,19877588,20234392,20254454,20552004,20740115,20891385,22219854,22493504,22518391,22905449,23131045,23241348,23392673,23500303,24293206,24587617,24711594,26076616,26382727,27375530,28402569,28740730,29004044,30328510,30493310,31257289,31520781,32162613,32739934,32772395,33253841,33558211,33802971,35952479,36395254,36435522,37061795,37426817,37605291,37850140,38024289,39307233,39783600,39984199,42192851,42688149,44294538,45956322,46503478,46929529,49072560,49339212,50575356,51001695,52040201,52974326,53026849,53805845,54298326,54694356,58172333,58888758,58953913,59967244,60557862,60846639,61242813,61524592,63600439,64371217,64695793,68269467,69070876,71670068,74358891,75244208,75933573,79401070,79832522,81832645,82522476,84202814,85714260,85799244,87059686,87856537,88497327,94124812,95284012,95389435,97029039,97984679,98451930,99092953,99548881,102907672,104154817,104679992,110462318,111759025,115964606,120315213,121747686,122863102,128473630,129171734,132408001,133524171,136243015,138688586,138826093,140865531,142154863,143191683,152297145,154172770,154343348,156996283,158542541,159298569,160335766,161073473,166508111,168526034,169375785,178731785,180829901,187634674,194674104,196991894,198796675,207874700,209004256,214240646,216046647,220445829,224402846,224625337,227925217,230011400,231689010,246421957,249456782,249732783,254025322,256527220,257750499,259428719,260622354,269415783,272680851,274055777,289194103,292588926,303599280,314989317,318739580,321659777,336348330,338175990,346648647,349570818,356688844,363091432,363451430,368790748,372166263,374880693,398719102,403629552,404076131,411021605,415069761,417049068,419764485,421695827,435923894,441206885,443431562,467925888,473418827,491233954,509663421,515731474,520456452,544223030,547180246,560889293,565617465,577134673,587494278,588076767,596715965,602177663,606569703,645141059,653086334,653808914,665046927,671596981,674799567,679193204,682318181,705339677,713887736,717487339,757119991,766007753,794833234,824652738,834471054,842116229,880571360,885356236,907537940,915188283,933823517,950585710,951528197,965506713,974343926,981450396};
    // vector<int>res;
    // int len=INT_MIN;
    // help(v,res,0,len);
    // cout<<len;
   cout<<lenLongestFibSubseq(v);

}