<!DOCTYPE html>
<html lang='en'>
<head>
<title>input-event-codes.h « linux « uapi « include - kernel/git/torvalds/linux.git - Linux kernel source tree</title>
<meta name='generator' content='cgit 1.2.3-1.el7'/>
<meta name='robots' content='noindex, nofollow'/>
<link rel='stylesheet' type='text/css' href='/cgit-data/cgit.css'/>
<link rel='shortcut icon' href='/favicon.ico'/>
<link rel='alternate' title='Atom feed' href='http://git.kernel.org/pub/scm/linux/kernel/git/torvalds/linux.git/atom/include/uapi/linux/input-event-codes.h?h=master' type='application/atom+xml'/>
<link rel='vcs-git' href='git://git.kernel.org/pub/scm/linux/kernel/git/torvalds/linux.git' title='kernel/git/torvalds/linux.git Git repository'/>
<link rel='vcs-git' href='https://git.kernel.org/pub/scm/linux/kernel/git/torvalds/linux.git' title='kernel/git/torvalds/linux.git Git repository'/>
<link rel='vcs-git' href='https://kernel.googlesource.com/pub/scm/linux/kernel/git/torvalds/linux.git' title='kernel/git/torvalds/linux.git Git repository'/>
</head>
<body>
<div id='cgit'><table id='header'>
<tr>
<td class='logo' rowspan='2'><a href='/'><img src='/cgit-data/cgit.png' alt='cgit logo'/></a></td>
<td class='main'><a href='/'>index</a> : <a title='kernel/git/torvalds/linux.git' href='/pub/scm/linux/kernel/git/torvalds/linux.git/'>kernel/git/torvalds/linux.git</a></td><td class='form'><form method='get'>
<select name='h' onchange='this.form.submit();'>
<option value='master' selected='selected'>master</option>
</select> <input type='submit' value='switch'/></form></td></tr>
<tr><td class='sub'>Linux kernel source tree</td><td class='sub right'>Linus Torvalds</td></tr></table>
<table class='tabs'><tr><td>
<a href='/pub/scm/linux/kernel/git/torvalds/linux.git/about/'>about</a><a href='/pub/scm/linux/kernel/git/torvalds/linux.git/'>summary</a><a href='/pub/scm/linux/kernel/git/torvalds/linux.git/refs/'>refs</a><a href='/pub/scm/linux/kernel/git/torvalds/linux.git/log/include/uapi/linux/input-event-codes.h'>log</a><a class='active' href='/pub/scm/linux/kernel/git/torvalds/linux.git/tree/include/uapi/linux/input-event-codes.h'>tree</a><a href='/pub/scm/linux/kernel/git/torvalds/linux.git/commit/include/uapi/linux/input-event-codes.h'>commit</a><a href='/pub/scm/linux/kernel/git/torvalds/linux.git/diff/include/uapi/linux/input-event-codes.h'>diff</a><a href='/pub/scm/linux/kernel/git/torvalds/linux.git/stats/include/uapi/linux/input-event-codes.h'>stats</a></td><td class='form'><form class='right' method='get' action='/pub/scm/linux/kernel/git/torvalds/linux.git/log/include/uapi/linux/input-event-codes.h'>
<select name='qt'>
<option value='grep'>log msg</option>
<option value='author'>author</option>
<option value='committer'>committer</option>
<option value='range'>range</option>
</select>
<input class='txt' type='search' size='10' name='q' value=''/>
<input type='submit' value='search'/>
</form>
</td></tr></table>
<div class='path'>path: <a href='/pub/scm/linux/kernel/git/torvalds/linux.git/tree/'>root</a>/<a href='/pub/scm/linux/kernel/git/torvalds/linux.git/tree/include'>include</a>/<a href='/pub/scm/linux/kernel/git/torvalds/linux.git/tree/include/uapi'>uapi</a>/<a href='/pub/scm/linux/kernel/git/torvalds/linux.git/tree/include/uapi/linux'>linux</a>/<a href='/pub/scm/linux/kernel/git/torvalds/linux.git/tree/include/uapi/linux/input-event-codes.h'>input-event-codes.h</a></div><div class='content'>blob: 225ec87d4f2283c7e2aacba55fbf3d405753b570 (<a href='/pub/scm/linux/kernel/git/torvalds/linux.git/plain/include/uapi/linux/input-event-codes.h'>plain</a>)
<table summary='blob content' class='blob'>
<tr><td class='linenumbers'><pre><a id='n1' href='#n1'>1</a>
<a id='n2' href='#n2'>2</a>
<a id='n3' href='#n3'>3</a>
<a id='n4' href='#n4'>4</a>
<a id='n5' href='#n5'>5</a>
<a id='n6' href='#n6'>6</a>
<a id='n7' href='#n7'>7</a>
<a id='n8' href='#n8'>8</a>
<a id='n9' href='#n9'>9</a>
<a id='n10' href='#n10'>10</a>
<a id='n11' href='#n11'>11</a>
<a id='n12' href='#n12'>12</a>
<a id='n13' href='#n13'>13</a>
<a id='n14' href='#n14'>14</a>
<a id='n15' href='#n15'>15</a>
<a id='n16' href='#n16'>16</a>
<a id='n17' href='#n17'>17</a>
<a id='n18' href='#n18'>18</a>
<a id='n19' href='#n19'>19</a>
<a id='n20' href='#n20'>20</a>
<a id='n21' href='#n21'>21</a>
<a id='n22' href='#n22'>22</a>
<a id='n23' href='#n23'>23</a>
<a id='n24' href='#n24'>24</a>
<a id='n25' href='#n25'>25</a>
<a id='n26' href='#n26'>26</a>
<a id='n27' href='#n27'>27</a>
<a id='n28' href='#n28'>28</a>
<a id='n29' href='#n29'>29</a>
<a id='n30' href='#n30'>30</a>
<a id='n31' href='#n31'>31</a>
<a id='n32' href='#n32'>32</a>
<a id='n33' href='#n33'>33</a>
<a id='n34' href='#n34'>34</a>
<a id='n35' href='#n35'>35</a>
<a id='n36' href='#n36'>36</a>
<a id='n37' href='#n37'>37</a>
<a id='n38' href='#n38'>38</a>
<a id='n39' href='#n39'>39</a>
<a id='n40' href='#n40'>40</a>
<a id='n41' href='#n41'>41</a>
<a id='n42' href='#n42'>42</a>
<a id='n43' href='#n43'>43</a>
<a id='n44' href='#n44'>44</a>
<a id='n45' href='#n45'>45</a>
<a id='n46' href='#n46'>46</a>
<a id='n47' href='#n47'>47</a>
<a id='n48' href='#n48'>48</a>
<a id='n49' href='#n49'>49</a>
<a id='n50' href='#n50'>50</a>
<a id='n51' href='#n51'>51</a>
<a id='n52' href='#n52'>52</a>
<a id='n53' href='#n53'>53</a>
<a id='n54' href='#n54'>54</a>
<a id='n55' href='#n55'>55</a>
<a id='n56' href='#n56'>56</a>
<a id='n57' href='#n57'>57</a>
<a id='n58' href='#n58'>58</a>
<a id='n59' href='#n59'>59</a>
<a id='n60' href='#n60'>60</a>
<a id='n61' href='#n61'>61</a>
<a id='n62' href='#n62'>62</a>
<a id='n63' href='#n63'>63</a>
<a id='n64' href='#n64'>64</a>
<a id='n65' href='#n65'>65</a>
<a id='n66' href='#n66'>66</a>
<a id='n67' href='#n67'>67</a>
<a id='n68' href='#n68'>68</a>
<a id='n69' href='#n69'>69</a>
<a id='n70' href='#n70'>70</a>
<a id='n71' href='#n71'>71</a>
<a id='n72' href='#n72'>72</a>
<a id='n73' href='#n73'>73</a>
<a id='n74' href='#n74'>74</a>
<a id='n75' href='#n75'>75</a>
<a id='n76' href='#n76'>76</a>
<a id='n77' href='#n77'>77</a>
<a id='n78' href='#n78'>78</a>
<a id='n79' href='#n79'>79</a>
<a id='n80' href='#n80'>80</a>
<a id='n81' href='#n81'>81</a>
<a id='n82' href='#n82'>82</a>
<a id='n83' href='#n83'>83</a>
<a id='n84' href='#n84'>84</a>
<a id='n85' href='#n85'>85</a>
<a id='n86' href='#n86'>86</a>
<a id='n87' href='#n87'>87</a>
<a id='n88' href='#n88'>88</a>
<a id='n89' href='#n89'>89</a>
<a id='n90' href='#n90'>90</a>
<a id='n91' href='#n91'>91</a>
<a id='n92' href='#n92'>92</a>
<a id='n93' href='#n93'>93</a>
<a id='n94' href='#n94'>94</a>
<a id='n95' href='#n95'>95</a>
<a id='n96' href='#n96'>96</a>
<a id='n97' href='#n97'>97</a>
<a id='n98' href='#n98'>98</a>
<a id='n99' href='#n99'>99</a>
<a id='n100' href='#n100'>100</a>
<a id='n101' href='#n101'>101</a>
<a id='n102' href='#n102'>102</a>
<a id='n103' href='#n103'>103</a>
<a id='n104' href='#n104'>104</a>
<a id='n105' href='#n105'>105</a>
<a id='n106' href='#n106'>106</a>
<a id='n107' href='#n107'>107</a>
<a id='n108' href='#n108'>108</a>
<a id='n109' href='#n109'>109</a>
<a id='n110' href='#n110'>110</a>
<a id='n111' href='#n111'>111</a>
<a id='n112' href='#n112'>112</a>
<a id='n113' href='#n113'>113</a>
<a id='n114' href='#n114'>114</a>
<a id='n115' href='#n115'>115</a>
<a id='n116' href='#n116'>116</a>
<a id='n117' href='#n117'>117</a>
<a id='n118' href='#n118'>118</a>
<a id='n119' href='#n119'>119</a>
<a id='n120' href='#n120'>120</a>
<a id='n121' href='#n121'>121</a>
<a id='n122' href='#n122'>122</a>
<a id='n123' href='#n123'>123</a>
<a id='n124' href='#n124'>124</a>
<a id='n125' href='#n125'>125</a>
<a id='n126' href='#n126'>126</a>
<a id='n127' href='#n127'>127</a>
<a id='n128' href='#n128'>128</a>
<a id='n129' href='#n129'>129</a>
<a id='n130' href='#n130'>130</a>
<a id='n131' href='#n131'>131</a>
<a id='n132' href='#n132'>132</a>
<a id='n133' href='#n133'>133</a>
<a id='n134' href='#n134'>134</a>
<a id='n135' href='#n135'>135</a>
<a id='n136' href='#n136'>136</a>
<a id='n137' href='#n137'>137</a>
<a id='n138' href='#n138'>138</a>
<a id='n139' href='#n139'>139</a>
<a id='n140' href='#n140'>140</a>
<a id='n141' href='#n141'>141</a>
<a id='n142' href='#n142'>142</a>
<a id='n143' href='#n143'>143</a>
<a id='n144' href='#n144'>144</a>
<a id='n145' href='#n145'>145</a>
<a id='n146' href='#n146'>146</a>
<a id='n147' href='#n147'>147</a>
<a id='n148' href='#n148'>148</a>
<a id='n149' href='#n149'>149</a>
<a id='n150' href='#n150'>150</a>
<a id='n151' href='#n151'>151</a>
<a id='n152' href='#n152'>152</a>
<a id='n153' href='#n153'>153</a>
<a id='n154' href='#n154'>154</a>
<a id='n155' href='#n155'>155</a>
<a id='n156' href='#n156'>156</a>
<a id='n157' href='#n157'>157</a>
<a id='n158' href='#n158'>158</a>
<a id='n159' href='#n159'>159</a>
<a id='n160' href='#n160'>160</a>
<a id='n161' href='#n161'>161</a>
<a id='n162' href='#n162'>162</a>
<a id='n163' href='#n163'>163</a>
<a id='n164' href='#n164'>164</a>
<a id='n165' href='#n165'>165</a>
<a id='n166' href='#n166'>166</a>
<a id='n167' href='#n167'>167</a>
<a id='n168' href='#n168'>168</a>
<a id='n169' href='#n169'>169</a>
<a id='n170' href='#n170'>170</a>
<a id='n171' href='#n171'>171</a>
<a id='n172' href='#n172'>172</a>
<a id='n173' href='#n173'>173</a>
<a id='n174' href='#n174'>174</a>
<a id='n175' href='#n175'>175</a>
<a id='n176' href='#n176'>176</a>
<a id='n177' href='#n177'>177</a>
<a id='n178' href='#n178'>178</a>
<a id='n179' href='#n179'>179</a>
<a id='n180' href='#n180'>180</a>
<a id='n181' href='#n181'>181</a>
<a id='n182' href='#n182'>182</a>
<a id='n183' href='#n183'>183</a>
<a id='n184' href='#n184'>184</a>
<a id='n185' href='#n185'>185</a>
<a id='n186' href='#n186'>186</a>
<a id='n187' href='#n187'>187</a>
<a id='n188' href='#n188'>188</a>
<a id='n189' href='#n189'>189</a>
<a id='n190' href='#n190'>190</a>
<a id='n191' href='#n191'>191</a>
<a id='n192' href='#n192'>192</a>
<a id='n193' href='#n193'>193</a>
<a id='n194' href='#n194'>194</a>
<a id='n195' href='#n195'>195</a>
<a id='n196' href='#n196'>196</a>
<a id='n197' href='#n197'>197</a>
<a id='n198' href='#n198'>198</a>
<a id='n199' href='#n199'>199</a>
<a id='n200' href='#n200'>200</a>
<a id='n201' href='#n201'>201</a>
<a id='n202' href='#n202'>202</a>
<a id='n203' href='#n203'>203</a>
<a id='n204' href='#n204'>204</a>
<a id='n205' href='#n205'>205</a>
<a id='n206' href='#n206'>206</a>
<a id='n207' href='#n207'>207</a>
<a id='n208' href='#n208'>208</a>
<a id='n209' href='#n209'>209</a>
<a id='n210' href='#n210'>210</a>
<a id='n211' href='#n211'>211</a>
<a id='n212' href='#n212'>212</a>
<a id='n213' href='#n213'>213</a>
<a id='n214' href='#n214'>214</a>
<a id='n215' href='#n215'>215</a>
<a id='n216' href='#n216'>216</a>
<a id='n217' href='#n217'>217</a>
<a id='n218' href='#n218'>218</a>
<a id='n219' href='#n219'>219</a>
<a id='n220' href='#n220'>220</a>
<a id='n221' href='#n221'>221</a>
<a id='n222' href='#n222'>222</a>
<a id='n223' href='#n223'>223</a>
<a id='n224' href='#n224'>224</a>
<a id='n225' href='#n225'>225</a>
<a id='n226' href='#n226'>226</a>
<a id='n227' href='#n227'>227</a>
<a id='n228' href='#n228'>228</a>
<a id='n229' href='#n229'>229</a>
<a id='n230' href='#n230'>230</a>
<a id='n231' href='#n231'>231</a>
<a id='n232' href='#n232'>232</a>
<a id='n233' href='#n233'>233</a>
<a id='n234' href='#n234'>234</a>
<a id='n235' href='#n235'>235</a>
<a id='n236' href='#n236'>236</a>
<a id='n237' href='#n237'>237</a>
<a id='n238' href='#n238'>238</a>
<a id='n239' href='#n239'>239</a>
<a id='n240' href='#n240'>240</a>
<a id='n241' href='#n241'>241</a>
<a id='n242' href='#n242'>242</a>
<a id='n243' href='#n243'>243</a>
<a id='n244' href='#n244'>244</a>
<a id='n245' href='#n245'>245</a>
<a id='n246' href='#n246'>246</a>
<a id='n247' href='#n247'>247</a>
<a id='n248' href='#n248'>248</a>
<a id='n249' href='#n249'>249</a>
<a id='n250' href='#n250'>250</a>
<a id='n251' href='#n251'>251</a>
<a id='n252' href='#n252'>252</a>
<a id='n253' href='#n253'>253</a>
<a id='n254' href='#n254'>254</a>
<a id='n255' href='#n255'>255</a>
<a id='n256' href='#n256'>256</a>
<a id='n257' href='#n257'>257</a>
<a id='n258' href='#n258'>258</a>
<a id='n259' href='#n259'>259</a>
<a id='n260' href='#n260'>260</a>
<a id='n261' href='#n261'>261</a>
<a id='n262' href='#n262'>262</a>
<a id='n263' href='#n263'>263</a>
<a id='n264' href='#n264'>264</a>
<a id='n265' href='#n265'>265</a>
<a id='n266' href='#n266'>266</a>
<a id='n267' href='#n267'>267</a>
<a id='n268' href='#n268'>268</a>
<a id='n269' href='#n269'>269</a>
<a id='n270' href='#n270'>270</a>
<a id='n271' href='#n271'>271</a>
<a id='n272' href='#n272'>272</a>
<a id='n273' href='#n273'>273</a>
<a id='n274' href='#n274'>274</a>
<a id='n275' href='#n275'>275</a>
<a id='n276' href='#n276'>276</a>
<a id='n277' href='#n277'>277</a>
<a id='n278' href='#n278'>278</a>
<a id='n279' href='#n279'>279</a>
<a id='n280' href='#n280'>280</a>
<a id='n281' href='#n281'>281</a>
<a id='n282' href='#n282'>282</a>
<a id='n283' href='#n283'>283</a>
<a id='n284' href='#n284'>284</a>
<a id='n285' href='#n285'>285</a>
<a id='n286' href='#n286'>286</a>
<a id='n287' href='#n287'>287</a>
<a id='n288' href='#n288'>288</a>
<a id='n289' href='#n289'>289</a>
<a id='n290' href='#n290'>290</a>
<a id='n291' href='#n291'>291</a>
<a id='n292' href='#n292'>292</a>
<a id='n293' href='#n293'>293</a>
<a id='n294' href='#n294'>294</a>
<a id='n295' href='#n295'>295</a>
<a id='n296' href='#n296'>296</a>
<a id='n297' href='#n297'>297</a>
<a id='n298' href='#n298'>298</a>
<a id='n299' href='#n299'>299</a>
<a id='n300' href='#n300'>300</a>
<a id='n301' href='#n301'>301</a>
<a id='n302' href='#n302'>302</a>
<a id='n303' href='#n303'>303</a>
<a id='n304' href='#n304'>304</a>
<a id='n305' href='#n305'>305</a>
<a id='n306' href='#n306'>306</a>
<a id='n307' href='#n307'>307</a>
<a id='n308' href='#n308'>308</a>
<a id='n309' href='#n309'>309</a>
<a id='n310' href='#n310'>310</a>
<a id='n311' href='#n311'>311</a>
<a id='n312' href='#n312'>312</a>
<a id='n313' href='#n313'>313</a>
<a id='n314' href='#n314'>314</a>
<a id='n315' href='#n315'>315</a>
<a id='n316' href='#n316'>316</a>
<a id='n317' href='#n317'>317</a>
<a id='n318' href='#n318'>318</a>
<a id='n319' href='#n319'>319</a>
<a id='n320' href='#n320'>320</a>
<a id='n321' href='#n321'>321</a>
<a id='n322' href='#n322'>322</a>
<a id='n323' href='#n323'>323</a>
<a id='n324' href='#n324'>324</a>
<a id='n325' href='#n325'>325</a>
<a id='n326' href='#n326'>326</a>
<a id='n327' href='#n327'>327</a>
<a id='n328' href='#n328'>328</a>
<a id='n329' href='#n329'>329</a>
<a id='n330' href='#n330'>330</a>
<a id='n331' href='#n331'>331</a>
<a id='n332' href='#n332'>332</a>
<a id='n333' href='#n333'>333</a>
<a id='n334' href='#n334'>334</a>
<a id='n335' href='#n335'>335</a>
<a id='n336' href='#n336'>336</a>
<a id='n337' href='#n337'>337</a>
<a id='n338' href='#n338'>338</a>
<a id='n339' href='#n339'>339</a>
<a id='n340' href='#n340'>340</a>
<a id='n341' href='#n341'>341</a>
<a id='n342' href='#n342'>342</a>
<a id='n343' href='#n343'>343</a>
<a id='n344' href='#n344'>344</a>
<a id='n345' href='#n345'>345</a>
<a id='n346' href='#n346'>346</a>
<a id='n347' href='#n347'>347</a>
<a id='n348' href='#n348'>348</a>
<a id='n349' href='#n349'>349</a>
<a id='n350' href='#n350'>350</a>
<a id='n351' href='#n351'>351</a>
<a id='n352' href='#n352'>352</a>
<a id='n353' href='#n353'>353</a>
<a id='n354' href='#n354'>354</a>
<a id='n355' href='#n355'>355</a>
<a id='n356' href='#n356'>356</a>
<a id='n357' href='#n357'>357</a>
<a id='n358' href='#n358'>358</a>
<a id='n359' href='#n359'>359</a>
<a id='n360' href='#n360'>360</a>
<a id='n361' href='#n361'>361</a>
<a id='n362' href='#n362'>362</a>
<a id='n363' href='#n363'>363</a>
<a id='n364' href='#n364'>364</a>
<a id='n365' href='#n365'>365</a>
<a id='n366' href='#n366'>366</a>
<a id='n367' href='#n367'>367</a>
<a id='n368' href='#n368'>368</a>
<a id='n369' href='#n369'>369</a>
<a id='n370' href='#n370'>370</a>
<a id='n371' href='#n371'>371</a>
<a id='n372' href='#n372'>372</a>
<a id='n373' href='#n373'>373</a>
<a id='n374' href='#n374'>374</a>
<a id='n375' href='#n375'>375</a>
<a id='n376' href='#n376'>376</a>
<a id='n377' href='#n377'>377</a>
<a id='n378' href='#n378'>378</a>
<a id='n379' href='#n379'>379</a>
<a id='n380' href='#n380'>380</a>
<a id='n381' href='#n381'>381</a>
<a id='n382' href='#n382'>382</a>
<a id='n383' href='#n383'>383</a>
<a id='n384' href='#n384'>384</a>
<a id='n385' href='#n385'>385</a>
<a id='n386' href='#n386'>386</a>
<a id='n387' href='#n387'>387</a>
<a id='n388' href='#n388'>388</a>
<a id='n389' href='#n389'>389</a>
<a id='n390' href='#n390'>390</a>
<a id='n391' href='#n391'>391</a>
<a id='n392' href='#n392'>392</a>
<a id='n393' href='#n393'>393</a>
<a id='n394' href='#n394'>394</a>
<a id='n395' href='#n395'>395</a>
<a id='n396' href='#n396'>396</a>
<a id='n397' href='#n397'>397</a>
<a id='n398' href='#n398'>398</a>
<a id='n399' href='#n399'>399</a>
<a id='n400' href='#n400'>400</a>
<a id='n401' href='#n401'>401</a>
<a id='n402' href='#n402'>402</a>
<a id='n403' href='#n403'>403</a>
<a id='n404' href='#n404'>404</a>
<a id='n405' href='#n405'>405</a>
<a id='n406' href='#n406'>406</a>
<a id='n407' href='#n407'>407</a>
<a id='n408' href='#n408'>408</a>
<a id='n409' href='#n409'>409</a>
<a id='n410' href='#n410'>410</a>
<a id='n411' href='#n411'>411</a>
<a id='n412' href='#n412'>412</a>
<a id='n413' href='#n413'>413</a>
<a id='n414' href='#n414'>414</a>
<a id='n415' href='#n415'>415</a>
<a id='n416' href='#n416'>416</a>
<a id='n417' href='#n417'>417</a>
<a id='n418' href='#n418'>418</a>
<a id='n419' href='#n419'>419</a>
<a id='n420' href='#n420'>420</a>
<a id='n421' href='#n421'>421</a>
<a id='n422' href='#n422'>422</a>
<a id='n423' href='#n423'>423</a>
<a id='n424' href='#n424'>424</a>
<a id='n425' href='#n425'>425</a>
<a id='n426' href='#n426'>426</a>
<a id='n427' href='#n427'>427</a>
<a id='n428' href='#n428'>428</a>
<a id='n429' href='#n429'>429</a>
<a id='n430' href='#n430'>430</a>
<a id='n431' href='#n431'>431</a>
<a id='n432' href='#n432'>432</a>
<a id='n433' href='#n433'>433</a>
<a id='n434' href='#n434'>434</a>
<a id='n435' href='#n435'>435</a>
<a id='n436' href='#n436'>436</a>
<a id='n437' href='#n437'>437</a>
<a id='n438' href='#n438'>438</a>
<a id='n439' href='#n439'>439</a>
<a id='n440' href='#n440'>440</a>
<a id='n441' href='#n441'>441</a>
<a id='n442' href='#n442'>442</a>
<a id='n443' href='#n443'>443</a>
<a id='n444' href='#n444'>444</a>
<a id='n445' href='#n445'>445</a>
<a id='n446' href='#n446'>446</a>
<a id='n447' href='#n447'>447</a>
<a id='n448' href='#n448'>448</a>
<a id='n449' href='#n449'>449</a>
<a id='n450' href='#n450'>450</a>
<a id='n451' href='#n451'>451</a>
<a id='n452' href='#n452'>452</a>
<a id='n453' href='#n453'>453</a>
<a id='n454' href='#n454'>454</a>
<a id='n455' href='#n455'>455</a>
<a id='n456' href='#n456'>456</a>
<a id='n457' href='#n457'>457</a>
<a id='n458' href='#n458'>458</a>
<a id='n459' href='#n459'>459</a>
<a id='n460' href='#n460'>460</a>
<a id='n461' href='#n461'>461</a>
<a id='n462' href='#n462'>462</a>
<a id='n463' href='#n463'>463</a>
<a id='n464' href='#n464'>464</a>
<a id='n465' href='#n465'>465</a>
<a id='n466' href='#n466'>466</a>
<a id='n467' href='#n467'>467</a>
<a id='n468' href='#n468'>468</a>
<a id='n469' href='#n469'>469</a>
<a id='n470' href='#n470'>470</a>
<a id='n471' href='#n471'>471</a>
<a id='n472' href='#n472'>472</a>
<a id='n473' href='#n473'>473</a>
<a id='n474' href='#n474'>474</a>
<a id='n475' href='#n475'>475</a>
<a id='n476' href='#n476'>476</a>
<a id='n477' href='#n477'>477</a>
<a id='n478' href='#n478'>478</a>
<a id='n479' href='#n479'>479</a>
<a id='n480' href='#n480'>480</a>
<a id='n481' href='#n481'>481</a>
<a id='n482' href='#n482'>482</a>
<a id='n483' href='#n483'>483</a>
<a id='n484' href='#n484'>484</a>
<a id='n485' href='#n485'>485</a>
<a id='n486' href='#n486'>486</a>
<a id='n487' href='#n487'>487</a>
<a id='n488' href='#n488'>488</a>
<a id='n489' href='#n489'>489</a>
<a id='n490' href='#n490'>490</a>
<a id='n491' href='#n491'>491</a>
<a id='n492' href='#n492'>492</a>
<a id='n493' href='#n493'>493</a>
<a id='n494' href='#n494'>494</a>
<a id='n495' href='#n495'>495</a>
<a id='n496' href='#n496'>496</a>
<a id='n497' href='#n497'>497</a>
<a id='n498' href='#n498'>498</a>
<a id='n499' href='#n499'>499</a>
<a id='n500' href='#n500'>500</a>
<a id='n501' href='#n501'>501</a>
<a id='n502' href='#n502'>502</a>
<a id='n503' href='#n503'>503</a>
<a id='n504' href='#n504'>504</a>
<a id='n505' href='#n505'>505</a>
<a id='n506' href='#n506'>506</a>
<a id='n507' href='#n507'>507</a>
<a id='n508' href='#n508'>508</a>
<a id='n509' href='#n509'>509</a>
<a id='n510' href='#n510'>510</a>
<a id='n511' href='#n511'>511</a>
<a id='n512' href='#n512'>512</a>
<a id='n513' href='#n513'>513</a>
<a id='n514' href='#n514'>514</a>
<a id='n515' href='#n515'>515</a>
<a id='n516' href='#n516'>516</a>
<a id='n517' href='#n517'>517</a>
<a id='n518' href='#n518'>518</a>
<a id='n519' href='#n519'>519</a>
<a id='n520' href='#n520'>520</a>
<a id='n521' href='#n521'>521</a>
<a id='n522' href='#n522'>522</a>
<a id='n523' href='#n523'>523</a>
<a id='n524' href='#n524'>524</a>
<a id='n525' href='#n525'>525</a>
<a id='n526' href='#n526'>526</a>
<a id='n527' href='#n527'>527</a>
<a id='n528' href='#n528'>528</a>
<a id='n529' href='#n529'>529</a>
<a id='n530' href='#n530'>530</a>
<a id='n531' href='#n531'>531</a>
<a id='n532' href='#n532'>532</a>
<a id='n533' href='#n533'>533</a>
<a id='n534' href='#n534'>534</a>
<a id='n535' href='#n535'>535</a>
<a id='n536' href='#n536'>536</a>
<a id='n537' href='#n537'>537</a>
<a id='n538' href='#n538'>538</a>
<a id='n539' href='#n539'>539</a>
<a id='n540' href='#n540'>540</a>
<a id='n541' href='#n541'>541</a>
<a id='n542' href='#n542'>542</a>
<a id='n543' href='#n543'>543</a>
<a id='n544' href='#n544'>544</a>
<a id='n545' href='#n545'>545</a>
<a id='n546' href='#n546'>546</a>
<a id='n547' href='#n547'>547</a>
<a id='n548' href='#n548'>548</a>
<a id='n549' href='#n549'>549</a>
<a id='n550' href='#n550'>550</a>
<a id='n551' href='#n551'>551</a>
<a id='n552' href='#n552'>552</a>
<a id='n553' href='#n553'>553</a>
<a id='n554' href='#n554'>554</a>
<a id='n555' href='#n555'>555</a>
<a id='n556' href='#n556'>556</a>
<a id='n557' href='#n557'>557</a>
<a id='n558' href='#n558'>558</a>
<a id='n559' href='#n559'>559</a>
<a id='n560' href='#n560'>560</a>
<a id='n561' href='#n561'>561</a>
<a id='n562' href='#n562'>562</a>
<a id='n563' href='#n563'>563</a>
<a id='n564' href='#n564'>564</a>
<a id='n565' href='#n565'>565</a>
<a id='n566' href='#n566'>566</a>
<a id='n567' href='#n567'>567</a>
<a id='n568' href='#n568'>568</a>
<a id='n569' href='#n569'>569</a>
<a id='n570' href='#n570'>570</a>
<a id='n571' href='#n571'>571</a>
<a id='n572' href='#n572'>572</a>
<a id='n573' href='#n573'>573</a>
<a id='n574' href='#n574'>574</a>
<a id='n575' href='#n575'>575</a>
<a id='n576' href='#n576'>576</a>
<a id='n577' href='#n577'>577</a>
<a id='n578' href='#n578'>578</a>
<a id='n579' href='#n579'>579</a>
<a id='n580' href='#n580'>580</a>
<a id='n581' href='#n581'>581</a>
<a id='n582' href='#n582'>582</a>
<a id='n583' href='#n583'>583</a>
<a id='n584' href='#n584'>584</a>
<a id='n585' href='#n585'>585</a>
<a id='n586' href='#n586'>586</a>
<a id='n587' href='#n587'>587</a>
<a id='n588' href='#n588'>588</a>
<a id='n589' href='#n589'>589</a>
<a id='n590' href='#n590'>590</a>
<a id='n591' href='#n591'>591</a>
<a id='n592' href='#n592'>592</a>
<a id='n593' href='#n593'>593</a>
<a id='n594' href='#n594'>594</a>
<a id='n595' href='#n595'>595</a>
<a id='n596' href='#n596'>596</a>
<a id='n597' href='#n597'>597</a>
<a id='n598' href='#n598'>598</a>
<a id='n599' href='#n599'>599</a>
<a id='n600' href='#n600'>600</a>
<a id='n601' href='#n601'>601</a>
<a id='n602' href='#n602'>602</a>
<a id='n603' href='#n603'>603</a>
<a id='n604' href='#n604'>604</a>
<a id='n605' href='#n605'>605</a>
<a id='n606' href='#n606'>606</a>
<a id='n607' href='#n607'>607</a>
<a id='n608' href='#n608'>608</a>
<a id='n609' href='#n609'>609</a>
<a id='n610' href='#n610'>610</a>
<a id='n611' href='#n611'>611</a>
<a id='n612' href='#n612'>612</a>
<a id='n613' href='#n613'>613</a>
<a id='n614' href='#n614'>614</a>
<a id='n615' href='#n615'>615</a>
<a id='n616' href='#n616'>616</a>
<a id='n617' href='#n617'>617</a>
<a id='n618' href='#n618'>618</a>
<a id='n619' href='#n619'>619</a>
<a id='n620' href='#n620'>620</a>
<a id='n621' href='#n621'>621</a>
<a id='n622' href='#n622'>622</a>
<a id='n623' href='#n623'>623</a>
<a id='n624' href='#n624'>624</a>
<a id='n625' href='#n625'>625</a>
<a id='n626' href='#n626'>626</a>
<a id='n627' href='#n627'>627</a>
<a id='n628' href='#n628'>628</a>
<a id='n629' href='#n629'>629</a>
<a id='n630' href='#n630'>630</a>
<a id='n631' href='#n631'>631</a>
<a id='n632' href='#n632'>632</a>
<a id='n633' href='#n633'>633</a>
<a id='n634' href='#n634'>634</a>
<a id='n635' href='#n635'>635</a>
<a id='n636' href='#n636'>636</a>
<a id='n637' href='#n637'>637</a>
<a id='n638' href='#n638'>638</a>
<a id='n639' href='#n639'>639</a>
<a id='n640' href='#n640'>640</a>
<a id='n641' href='#n641'>641</a>
<a id='n642' href='#n642'>642</a>
<a id='n643' href='#n643'>643</a>
<a id='n644' href='#n644'>644</a>
<a id='n645' href='#n645'>645</a>
<a id='n646' href='#n646'>646</a>
<a id='n647' href='#n647'>647</a>
<a id='n648' href='#n648'>648</a>
<a id='n649' href='#n649'>649</a>
<a id='n650' href='#n650'>650</a>
<a id='n651' href='#n651'>651</a>
<a id='n652' href='#n652'>652</a>
<a id='n653' href='#n653'>653</a>
<a id='n654' href='#n654'>654</a>
<a id='n655' href='#n655'>655</a>
<a id='n656' href='#n656'>656</a>
<a id='n657' href='#n657'>657</a>
<a id='n658' href='#n658'>658</a>
<a id='n659' href='#n659'>659</a>
<a id='n660' href='#n660'>660</a>
<a id='n661' href='#n661'>661</a>
<a id='n662' href='#n662'>662</a>
<a id='n663' href='#n663'>663</a>
<a id='n664' href='#n664'>664</a>
<a id='n665' href='#n665'>665</a>
<a id='n666' href='#n666'>666</a>
<a id='n667' href='#n667'>667</a>
<a id='n668' href='#n668'>668</a>
<a id='n669' href='#n669'>669</a>
<a id='n670' href='#n670'>670</a>
<a id='n671' href='#n671'>671</a>
<a id='n672' href='#n672'>672</a>
<a id='n673' href='#n673'>673</a>
<a id='n674' href='#n674'>674</a>
<a id='n675' href='#n675'>675</a>
<a id='n676' href='#n676'>676</a>
<a id='n677' href='#n677'>677</a>
<a id='n678' href='#n678'>678</a>
<a id='n679' href='#n679'>679</a>
<a id='n680' href='#n680'>680</a>
<a id='n681' href='#n681'>681</a>
<a id='n682' href='#n682'>682</a>
<a id='n683' href='#n683'>683</a>
<a id='n684' href='#n684'>684</a>
<a id='n685' href='#n685'>685</a>
<a id='n686' href='#n686'>686</a>
<a id='n687' href='#n687'>687</a>
<a id='n688' href='#n688'>688</a>
<a id='n689' href='#n689'>689</a>
<a id='n690' href='#n690'>690</a>
<a id='n691' href='#n691'>691</a>
<a id='n692' href='#n692'>692</a>
<a id='n693' href='#n693'>693</a>
<a id='n694' href='#n694'>694</a>
<a id='n695' href='#n695'>695</a>
<a id='n696' href='#n696'>696</a>
<a id='n697' href='#n697'>697</a>
<a id='n698' href='#n698'>698</a>
<a id='n699' href='#n699'>699</a>
<a id='n700' href='#n700'>700</a>
<a id='n701' href='#n701'>701</a>
<a id='n702' href='#n702'>702</a>
<a id='n703' href='#n703'>703</a>
<a id='n704' href='#n704'>704</a>
<a id='n705' href='#n705'>705</a>
<a id='n706' href='#n706'>706</a>
<a id='n707' href='#n707'>707</a>
<a id='n708' href='#n708'>708</a>
<a id='n709' href='#n709'>709</a>
<a id='n710' href='#n710'>710</a>
<a id='n711' href='#n711'>711</a>
<a id='n712' href='#n712'>712</a>
<a id='n713' href='#n713'>713</a>
<a id='n714' href='#n714'>714</a>
<a id='n715' href='#n715'>715</a>
<a id='n716' href='#n716'>716</a>
<a id='n717' href='#n717'>717</a>
<a id='n718' href='#n718'>718</a>
<a id='n719' href='#n719'>719</a>
<a id='n720' href='#n720'>720</a>
<a id='n721' href='#n721'>721</a>
<a id='n722' href='#n722'>722</a>
<a id='n723' href='#n723'>723</a>
<a id='n724' href='#n724'>724</a>
<a id='n725' href='#n725'>725</a>
<a id='n726' href='#n726'>726</a>
<a id='n727' href='#n727'>727</a>
<a id='n728' href='#n728'>728</a>
<a id='n729' href='#n729'>729</a>
<a id='n730' href='#n730'>730</a>
<a id='n731' href='#n731'>731</a>
<a id='n732' href='#n732'>732</a>
<a id='n733' href='#n733'>733</a>
<a id='n734' href='#n734'>734</a>
<a id='n735' href='#n735'>735</a>
<a id='n736' href='#n736'>736</a>
<a id='n737' href='#n737'>737</a>
<a id='n738' href='#n738'>738</a>
<a id='n739' href='#n739'>739</a>
<a id='n740' href='#n740'>740</a>
<a id='n741' href='#n741'>741</a>
<a id='n742' href='#n742'>742</a>
<a id='n743' href='#n743'>743</a>
<a id='n744' href='#n744'>744</a>
<a id='n745' href='#n745'>745</a>
<a id='n746' href='#n746'>746</a>
<a id='n747' href='#n747'>747</a>
<a id='n748' href='#n748'>748</a>
<a id='n749' href='#n749'>749</a>
<a id='n750' href='#n750'>750</a>
<a id='n751' href='#n751'>751</a>
<a id='n752' href='#n752'>752</a>
<a id='n753' href='#n753'>753</a>
<a id='n754' href='#n754'>754</a>
<a id='n755' href='#n755'>755</a>
<a id='n756' href='#n756'>756</a>
<a id='n757' href='#n757'>757</a>
<a id='n758' href='#n758'>758</a>
<a id='n759' href='#n759'>759</a>
<a id='n760' href='#n760'>760</a>
<a id='n761' href='#n761'>761</a>
<a id='n762' href='#n762'>762</a>
<a id='n763' href='#n763'>763</a>
<a id='n764' href='#n764'>764</a>
<a id='n765' href='#n765'>765</a>
<a id='n766' href='#n766'>766</a>
<a id='n767' href='#n767'>767</a>
<a id='n768' href='#n768'>768</a>
<a id='n769' href='#n769'>769</a>
<a id='n770' href='#n770'>770</a>
<a id='n771' href='#n771'>771</a>
<a id='n772' href='#n772'>772</a>
<a id='n773' href='#n773'>773</a>
<a id='n774' href='#n774'>774</a>
<a id='n775' href='#n775'>775</a>
<a id='n776' href='#n776'>776</a>
<a id='n777' href='#n777'>777</a>
<a id='n778' href='#n778'>778</a>
<a id='n779' href='#n779'>779</a>
<a id='n780' href='#n780'>780</a>
<a id='n781' href='#n781'>781</a>
<a id='n782' href='#n782'>782</a>
<a id='n783' href='#n783'>783</a>
<a id='n784' href='#n784'>784</a>
<a id='n785' href='#n785'>785</a>
<a id='n786' href='#n786'>786</a>
<a id='n787' href='#n787'>787</a>
<a id='n788' href='#n788'>788</a>
<a id='n789' href='#n789'>789</a>
<a id='n790' href='#n790'>790</a>
<a id='n791' href='#n791'>791</a>
<a id='n792' href='#n792'>792</a>
<a id='n793' href='#n793'>793</a>
<a id='n794' href='#n794'>794</a>
<a id='n795' href='#n795'>795</a>
<a id='n796' href='#n796'>796</a>
<a id='n797' href='#n797'>797</a>
<a id='n798' href='#n798'>798</a>
<a id='n799' href='#n799'>799</a>
<a id='n800' href='#n800'>800</a>
<a id='n801' href='#n801'>801</a>
<a id='n802' href='#n802'>802</a>
<a id='n803' href='#n803'>803</a>
<a id='n804' href='#n804'>804</a>
<a id='n805' href='#n805'>805</a>
<a id='n806' href='#n806'>806</a>
<a id='n807' href='#n807'>807</a>
<a id='n808' href='#n808'>808</a>
<a id='n809' href='#n809'>809</a>
<a id='n810' href='#n810'>810</a>
<a id='n811' href='#n811'>811</a>
<a id='n812' href='#n812'>812</a>
<a id='n813' href='#n813'>813</a>
<a id='n814' href='#n814'>814</a>
<a id='n815' href='#n815'>815</a>
<a id='n816' href='#n816'>816</a>
<a id='n817' href='#n817'>817</a>
<a id='n818' href='#n818'>818</a>
<a id='n819' href='#n819'>819</a>
<a id='n820' href='#n820'>820</a>
<a id='n821' href='#n821'>821</a>
<a id='n822' href='#n822'>822</a>
<a id='n823' href='#n823'>823</a>
<a id='n824' href='#n824'>824</a>
<a id='n825' href='#n825'>825</a>
<a id='n826' href='#n826'>826</a>
<a id='n827' href='#n827'>827</a>
<a id='n828' href='#n828'>828</a>
<a id='n829' href='#n829'>829</a>
<a id='n830' href='#n830'>830</a>
<a id='n831' href='#n831'>831</a>
<a id='n832' href='#n832'>832</a>
<a id='n833' href='#n833'>833</a>
<a id='n834' href='#n834'>834</a>
<a id='n835' href='#n835'>835</a>
<a id='n836' href='#n836'>836</a>
<a id='n837' href='#n837'>837</a>
<a id='n838' href='#n838'>838</a>
<a id='n839' href='#n839'>839</a>
<a id='n840' href='#n840'>840</a>
<a id='n841' href='#n841'>841</a>
<a id='n842' href='#n842'>842</a>
<a id='n843' href='#n843'>843</a>
<a id='n844' href='#n844'>844</a>
<a id='n845' href='#n845'>845</a>
<a id='n846' href='#n846'>846</a>
<a id='n847' href='#n847'>847</a>
<a id='n848' href='#n848'>848</a>
<a id='n849' href='#n849'>849</a>
<a id='n850' href='#n850'>850</a>
<a id='n851' href='#n851'>851</a>
<a id='n852' href='#n852'>852</a>
<a id='n853' href='#n853'>853</a>
<a id='n854' href='#n854'>854</a>
<a id='n855' href='#n855'>855</a>
<a id='n856' href='#n856'>856</a>
<a id='n857' href='#n857'>857</a>
<a id='n858' href='#n858'>858</a>
<a id='n859' href='#n859'>859</a>
<a id='n860' href='#n860'>860</a>
<a id='n861' href='#n861'>861</a>
<a id='n862' href='#n862'>862</a>
<a id='n863' href='#n863'>863</a>
<a id='n864' href='#n864'>864</a>
<a id='n865' href='#n865'>865</a>
<a id='n866' href='#n866'>866</a>
<a id='n867' href='#n867'>867</a>
<a id='n868' href='#n868'>868</a>
<a id='n869' href='#n869'>869</a>
<a id='n870' href='#n870'>870</a>
<a id='n871' href='#n871'>871</a>
<a id='n872' href='#n872'>872</a>
<a id='n873' href='#n873'>873</a>
<a id='n874' href='#n874'>874</a>
<a id='n875' href='#n875'>875</a>
<a id='n876' href='#n876'>876</a>
<a id='n877' href='#n877'>877</a>
<a id='n878' href='#n878'>878</a>
<a id='n879' href='#n879'>879</a>
<a id='n880' href='#n880'>880</a>
<a id='n881' href='#n881'>881</a>
<a id='n882' href='#n882'>882</a>
<a id='n883' href='#n883'>883</a>
<a id='n884' href='#n884'>884</a>
<a id='n885' href='#n885'>885</a>
<a id='n886' href='#n886'>886</a>
<a id='n887' href='#n887'>887</a>
<a id='n888' href='#n888'>888</a>
<a id='n889' href='#n889'>889</a>
<a id='n890' href='#n890'>890</a>
<a id='n891' href='#n891'>891</a>
<a id='n892' href='#n892'>892</a>
<a id='n893' href='#n893'>893</a>
<a id='n894' href='#n894'>894</a>
<a id='n895' href='#n895'>895</a>
<a id='n896' href='#n896'>896</a>
<a id='n897' href='#n897'>897</a>
<a id='n898' href='#n898'>898</a>
<a id='n899' href='#n899'>899</a>
<a id='n900' href='#n900'>900</a>
<a id='n901' href='#n901'>901</a>
<a id='n902' href='#n902'>902</a>
<a id='n903' href='#n903'>903</a>
<a id='n904' href='#n904'>904</a>
<a id='n905' href='#n905'>905</a>
<a id='n906' href='#n906'>906</a>
<a id='n907' href='#n907'>907</a>
<a id='n908' href='#n908'>908</a>
<a id='n909' href='#n909'>909</a>
<a id='n910' href='#n910'>910</a>
<a id='n911' href='#n911'>911</a>
<a id='n912' href='#n912'>912</a>
<a id='n913' href='#n913'>913</a>
<a id='n914' href='#n914'>914</a>
<a id='n915' href='#n915'>915</a>
<a id='n916' href='#n916'>916</a>
<a id='n917' href='#n917'>917</a>
<a id='n918' href='#n918'>918</a>
<a id='n919' href='#n919'>919</a>
<a id='n920' href='#n920'>920</a>
<a id='n921' href='#n921'>921</a>
<a id='n922' href='#n922'>922</a>
<a id='n923' href='#n923'>923</a>
<a id='n924' href='#n924'>924</a>
<a id='n925' href='#n925'>925</a>
<a id='n926' href='#n926'>926</a>
<a id='n927' href='#n927'>927</a>
<a id='n928' href='#n928'>928</a>
<a id='n929' href='#n929'>929</a>
<a id='n930' href='#n930'>930</a>
<a id='n931' href='#n931'>931</a>
<a id='n932' href='#n932'>932</a>
<a id='n933' href='#n933'>933</a>
<a id='n934' href='#n934'>934</a>
<a id='n935' href='#n935'>935</a>
<a id='n936' href='#n936'>936</a>
<a id='n937' href='#n937'>937</a>
<a id='n938' href='#n938'>938</a>
<a id='n939' href='#n939'>939</a>
<a id='n940' href='#n940'>940</a>
<a id='n941' href='#n941'>941</a>
<a id='n942' href='#n942'>942</a>
<a id='n943' href='#n943'>943</a>
<a id='n944' href='#n944'>944</a>
<a id='n945' href='#n945'>945</a>
<a id='n946' href='#n946'>946</a>
<a id='n947' href='#n947'>947</a>
<a id='n948' href='#n948'>948</a>
<a id='n949' href='#n949'>949</a>
<a id='n950' href='#n950'>950</a>
</pre></td>
<td class='lines'><pre><code><style>.highlight .hll { background-color: #ffffcc }
.highlight .c { color: #888888 } /* Comment */
.highlight .err { color: #a61717; background-color: #e3d2d2 } /* Error */
.highlight .k { color: #008800; font-weight: bold } /* Keyword */
.highlight .ch { color: #888888 } /* Comment.Hashbang */
.highlight .cm { color: #888888 } /* Comment.Multiline */
.highlight .cp { color: #cc0000; font-weight: bold } /* Comment.Preproc */
.highlight .cpf { color: #888888 } /* Comment.PreprocFile */
.highlight .c1 { color: #888888 } /* Comment.Single */
.highlight .cs { color: #cc0000; font-weight: bold; background-color: #fff0f0 } /* Comment.Special */
.highlight .gd { color: #000000; background-color: #ffdddd } /* Generic.Deleted */
.highlight .ge { font-style: italic } /* Generic.Emph */
.highlight .gr { color: #aa0000 } /* Generic.Error */
.highlight .gh { color: #333333 } /* Generic.Heading */
.highlight .gi { color: #000000; background-color: #ddffdd } /* Generic.Inserted */
.highlight .go { color: #888888 } /* Generic.Output */
.highlight .gp { color: #555555 } /* Generic.Prompt */
.highlight .gs { font-weight: bold } /* Generic.Strong */
.highlight .gu { color: #666666 } /* Generic.Subheading */
.highlight .gt { color: #aa0000 } /* Generic.Traceback */
.highlight .kc { color: #008800; font-weight: bold } /* Keyword.Constant */
.highlight .kd { color: #008800; font-weight: bold } /* Keyword.Declaration */
.highlight .kn { color: #008800; font-weight: bold } /* Keyword.Namespace */
.highlight .kp { color: #008800 } /* Keyword.Pseudo */
.highlight .kr { color: #008800; font-weight: bold } /* Keyword.Reserved */
.highlight .kt { color: #888888; font-weight: bold } /* Keyword.Type */
.highlight .m { color: #0000DD; font-weight: bold } /* Literal.Number */
.highlight .s { color: #dd2200; background-color: #fff0f0 } /* Literal.String */
.highlight .na { color: #336699 } /* Name.Attribute */
.highlight .nb { color: #003388 } /* Name.Builtin */
.highlight .nc { color: #bb0066; font-weight: bold } /* Name.Class */
.highlight .no { color: #003366; font-weight: bold } /* Name.Constant */
.highlight .nd { color: #555555 } /* Name.Decorator */
.highlight .ne { color: #bb0066; font-weight: bold } /* Name.Exception */
.highlight .nf { color: #0066bb; font-weight: bold } /* Name.Function */
.highlight .nl { color: #336699; font-style: italic } /* Name.Label */
.highlight .nn { color: #bb0066; font-weight: bold } /* Name.Namespace */
.highlight .py { color: #336699; font-weight: bold } /* Name.Property */
.highlight .nt { color: #bb0066; font-weight: bold } /* Name.Tag */
.highlight .nv { color: #336699 } /* Name.Variable */
.highlight .ow { color: #008800 } /* Operator.Word */
.highlight .w { color: #bbbbbb } /* Text.Whitespace */
.highlight .mb { color: #0000DD; font-weight: bold } /* Literal.Number.Bin */
.highlight .mf { color: #0000DD; font-weight: bold } /* Literal.Number.Float */
.highlight .mh { color: #0000DD; font-weight: bold } /* Literal.Number.Hex */
.highlight .mi { color: #0000DD; font-weight: bold } /* Literal.Number.Integer */
.highlight .mo { color: #0000DD; font-weight: bold } /* Literal.Number.Oct */
.highlight .sa { color: #dd2200; background-color: #fff0f0 } /* Literal.String.Affix */
.highlight .sb { color: #dd2200; background-color: #fff0f0 } /* Literal.String.Backtick */
.highlight .sc { color: #dd2200; background-color: #fff0f0 } /* Literal.String.Char */
.highlight .dl { color: #dd2200; background-color: #fff0f0 } /* Literal.String.Delimiter */
.highlight .sd { color: #dd2200; background-color: #fff0f0 } /* Literal.String.Doc */
.highlight .s2 { color: #dd2200; background-color: #fff0f0 } /* Literal.String.Double */
.highlight .se { color: #0044dd; background-color: #fff0f0 } /* Literal.String.Escape */
.highlight .sh { color: #dd2200; background-color: #fff0f0 } /* Literal.String.Heredoc */
.highlight .si { color: #3333bb; background-color: #fff0f0 } /* Literal.String.Interpol */
.highlight .sx { color: #22bb22; background-color: #f0fff0 } /* Literal.String.Other */
.highlight .sr { color: #008800; background-color: #fff0ff } /* Literal.String.Regex */
.highlight .s1 { color: #dd2200; background-color: #fff0f0 } /* Literal.String.Single */
.highlight .ss { color: #aa6600; background-color: #fff0f0 } /* Literal.String.Symbol */
.highlight .bp { color: #003388 } /* Name.Builtin.Pseudo */
.highlight .fm { color: #0066bb; font-weight: bold } /* Name.Function.Magic */
.highlight .vc { color: #336699 } /* Name.Variable.Class */
.highlight .vg { color: #dd7700 } /* Name.Variable.Global */
.highlight .vi { color: #3333bb } /* Name.Variable.Instance */
.highlight .vm { color: #336699 } /* Name.Variable.Magic */
.highlight .il { color: #0000DD; font-weight: bold } /* Literal.Number.Integer.Long */</style><div class="highlight"><pre><span></span><span class="cm">/* SPDX-License-Identifier: GPL-2.0-only WITH Linux-syscall-note */</span>
<span class="cm">/*</span>
<span class="cm"> * Input event codes</span>
<span class="cm"> *</span>
<span class="cm"> *    *** IMPORTANT ***</span>
<span class="cm"> * This file is not only included from C-code but also from devicetree source</span>
<span class="cm"> * files. As such this file MUST only contain comments and defines.</span>
<span class="cm"> *</span>
<span class="cm"> * Copyright (c) 1999-2002 Vojtech Pavlik</span>
<span class="cm"> * Copyright (c) 2015 Hans de Goede &lt;hdegoede@redhat.com&gt;</span>
<span class="cm"> *</span>
<span class="cm"> * This program is free software; you can redistribute it and/or modify it</span>
<span class="cm"> * under the terms of the GNU General Public License version 2 as published by</span>
<span class="cm"> * the Free Software Foundation.</span>
<span class="cm"> */</span>
<span class="cp">#ifndef _UAPI_INPUT_EVENT_CODES_H</span>
<span class="cp">#define _UAPI_INPUT_EVENT_CODES_H</span>

<span class="cm">/*</span>
<span class="cm"> * Device properties and quirks</span>
<span class="cm"> */</span>

<span class="cp">#define INPUT_PROP_POINTER		0x00	</span><span class="cm">/* needs a pointer */</span><span class="cp"></span>
<span class="cp">#define INPUT_PROP_DIRECT		0x01	</span><span class="cm">/* direct input devices */</span><span class="cp"></span>
<span class="cp">#define INPUT_PROP_BUTTONPAD		0x02	</span><span class="cm">/* has button(s) under pad */</span><span class="cp"></span>
<span class="cp">#define INPUT_PROP_SEMI_MT		0x03	</span><span class="cm">/* touch rectangle only */</span><span class="cp"></span>
<span class="cp">#define INPUT_PROP_TOPBUTTONPAD		0x04	</span><span class="cm">/* softbuttons at top of pad */</span><span class="cp"></span>
<span class="cp">#define INPUT_PROP_POINTING_STICK	0x05	</span><span class="cm">/* is a pointing stick */</span><span class="cp"></span>
<span class="cp">#define INPUT_PROP_ACCELEROMETER	0x06	</span><span class="cm">/* has accelerometer */</span><span class="cp"></span>

<span class="cp">#define INPUT_PROP_MAX			0x1f</span>
<span class="cp">#define INPUT_PROP_CNT			(INPUT_PROP_MAX + 1)</span>

<span class="cm">/*</span>
<span class="cm"> * Event types</span>
<span class="cm"> */</span>

<span class="cp">#define EV_SYN			0x00</span>
<span class="cp">#define EV_KEY			0x01</span>
<span class="cp">#define EV_REL			0x02</span>
<span class="cp">#define EV_ABS			0x03</span>
<span class="cp">#define EV_MSC			0x04</span>
<span class="cp">#define EV_SW			0x05</span>
<span class="cp">#define EV_LED			0x11</span>
<span class="cp">#define EV_SND			0x12</span>
<span class="cp">#define EV_REP			0x14</span>
<span class="cp">#define EV_FF			0x15</span>
<span class="cp">#define EV_PWR			0x16</span>
<span class="cp">#define EV_FF_STATUS		0x17</span>
<span class="cp">#define EV_MAX			0x1f</span>
<span class="cp">#define EV_CNT			(EV_MAX+1)</span>

<span class="cm">/*</span>
<span class="cm"> * Synchronization events.</span>
<span class="cm"> */</span>

<span class="cp">#define SYN_REPORT		0</span>
<span class="cp">#define SYN_CONFIG		1</span>
<span class="cp">#define SYN_MT_REPORT		2</span>
<span class="cp">#define SYN_DROPPED		3</span>
<span class="cp">#define SYN_MAX			0xf</span>
<span class="cp">#define SYN_CNT			(SYN_MAX+1)</span>

<span class="cm">/*</span>
<span class="cm"> * Keys and buttons</span>
<span class="cm"> *</span>
<span class="cm"> * Most of the keys/buttons are modeled after USB HUT 1.12</span>
<span class="cm"> * (see http://www.usb.org/developers/hidpage).</span>
<span class="cm"> * Abbreviations in the comments:</span>
<span class="cm"> * AC - Application Control</span>
<span class="cm"> * AL - Application Launch Button</span>
<span class="cm"> * SC - System Control</span>
<span class="cm"> */</span>

<span class="cp">#define KEY_RESERVED		0</span>
<span class="cp">#define KEY_ESC			1</span>
<span class="cp">#define KEY_1			2</span>
<span class="cp">#define KEY_2			3</span>
<span class="cp">#define KEY_3			4</span>
<span class="cp">#define KEY_4			5</span>
<span class="cp">#define KEY_5			6</span>
<span class="cp">#define KEY_6			7</span>
<span class="cp">#define KEY_7			8</span>
<span class="cp">#define KEY_8			9</span>
<span class="cp">#define KEY_9			10</span>
<span class="cp">#define KEY_0			11</span>
<span class="cp">#define KEY_MINUS		12</span>
<span class="cp">#define KEY_EQUAL		13</span>
<span class="cp">#define KEY_BACKSPACE		14</span>
<span class="cp">#define KEY_TAB			15</span>
<span class="cp">#define KEY_Q			16</span>
<span class="cp">#define KEY_W			17</span>
<span class="cp">#define KEY_E			18</span>
<span class="cp">#define KEY_R			19</span>
<span class="cp">#define KEY_T			20</span>
<span class="cp">#define KEY_Y			21</span>
<span class="cp">#define KEY_U			22</span>
<span class="cp">#define KEY_I			23</span>
<span class="cp">#define KEY_O			24</span>
<span class="cp">#define KEY_P			25</span>
<span class="cp">#define KEY_LEFTBRACE		26</span>
<span class="cp">#define KEY_RIGHTBRACE		27</span>
<span class="cp">#define KEY_ENTER		28</span>
<span class="cp">#define KEY_LEFTCTRL		29</span>
<span class="cp">#define KEY_A			30</span>
<span class="cp">#define KEY_S			31</span>
<span class="cp">#define KEY_D			32</span>
<span class="cp">#define KEY_F			33</span>
<span class="cp">#define KEY_G			34</span>
<span class="cp">#define KEY_H			35</span>
<span class="cp">#define KEY_J			36</span>
<span class="cp">#define KEY_K			37</span>
<span class="cp">#define KEY_L			38</span>
<span class="cp">#define KEY_SEMICOLON		39</span>
<span class="cp">#define KEY_APOSTROPHE		40</span>
<span class="cp">#define KEY_GRAVE		41</span>
<span class="cp">#define KEY_LEFTSHIFT		42</span>
<span class="cp">#define KEY_BACKSLASH		43</span>
<span class="cp">#define KEY_Z			44</span>
<span class="cp">#define KEY_X			45</span>
<span class="cp">#define KEY_C			46</span>
<span class="cp">#define KEY_V			47</span>
<span class="cp">#define KEY_B			48</span>
<span class="cp">#define KEY_N			49</span>
<span class="cp">#define KEY_M			50</span>
<span class="cp">#define KEY_COMMA		51</span>
<span class="cp">#define KEY_DOT			52</span>
<span class="cp">#define KEY_SLASH		53</span>
<span class="cp">#define KEY_RIGHTSHIFT		54</span>
<span class="cp">#define KEY_KPASTERISK		55</span>
<span class="cp">#define KEY_LEFTALT		56</span>
<span class="cp">#define KEY_SPACE		57</span>
<span class="cp">#define KEY_CAPSLOCK		58</span>
<span class="cp">#define KEY_F1			59</span>
<span class="cp">#define KEY_F2			60</span>
<span class="cp">#define KEY_F3			61</span>
<span class="cp">#define KEY_F4			62</span>
<span class="cp">#define KEY_F5			63</span>
<span class="cp">#define KEY_F6			64</span>
<span class="cp">#define KEY_F7			65</span>
<span class="cp">#define KEY_F8			66</span>
<span class="cp">#define KEY_F9			67</span>
<span class="cp">#define KEY_F10			68</span>
<span class="cp">#define KEY_NUMLOCK		69</span>
<span class="cp">#define KEY_SCROLLLOCK		70</span>
<span class="cp">#define KEY_KP7			71</span>
<span class="cp">#define KEY_KP8			72</span>
<span class="cp">#define KEY_KP9			73</span>
<span class="cp">#define KEY_KPMINUS		74</span>
<span class="cp">#define KEY_KP4			75</span>
<span class="cp">#define KEY_KP5			76</span>
<span class="cp">#define KEY_KP6			77</span>
<span class="cp">#define KEY_KPPLUS		78</span>
<span class="cp">#define KEY_KP1			79</span>
<span class="cp">#define KEY_KP2			80</span>
<span class="cp">#define KEY_KP3			81</span>
<span class="cp">#define KEY_KP0			82</span>
<span class="cp">#define KEY_KPDOT		83</span>

<span class="cp">#define KEY_ZENKAKUHANKAKU	85</span>
<span class="cp">#define KEY_102ND		86</span>
<span class="cp">#define KEY_F11			87</span>
<span class="cp">#define KEY_F12			88</span>
<span class="cp">#define KEY_RO			89</span>
<span class="cp">#define KEY_KATAKANA		90</span>
<span class="cp">#define KEY_HIRAGANA		91</span>
<span class="cp">#define KEY_HENKAN		92</span>
<span class="cp">#define KEY_KATAKANAHIRAGANA	93</span>
<span class="cp">#define KEY_MUHENKAN		94</span>
<span class="cp">#define KEY_KPJPCOMMA		95</span>
<span class="cp">#define KEY_KPENTER		96</span>
<span class="cp">#define KEY_RIGHTCTRL		97</span>
<span class="cp">#define KEY_KPSLASH		98</span>
<span class="cp">#define KEY_SYSRQ		99</span>
<span class="cp">#define KEY_RIGHTALT		100</span>
<span class="cp">#define KEY_LINEFEED		101</span>
<span class="cp">#define KEY_HOME		102</span>
<span class="cp">#define KEY_UP			103</span>
<span class="cp">#define KEY_PAGEUP		104</span>
<span class="cp">#define KEY_LEFT		105</span>
<span class="cp">#define KEY_RIGHT		106</span>
<span class="cp">#define KEY_END			107</span>
<span class="cp">#define KEY_DOWN		108</span>
<span class="cp">#define KEY_PAGEDOWN		109</span>
<span class="cp">#define KEY_INSERT		110</span>
<span class="cp">#define KEY_DELETE		111</span>
<span class="cp">#define KEY_MACRO		112</span>
<span class="cp">#define KEY_MUTE		113</span>
<span class="cp">#define KEY_VOLUMEDOWN		114</span>
<span class="cp">#define KEY_VOLUMEUP		115</span>
<span class="cp">#define KEY_POWER		116	</span><span class="cm">/* SC System Power Down */</span><span class="cp"></span>
<span class="cp">#define KEY_KPEQUAL		117</span>
<span class="cp">#define KEY_KPPLUSMINUS		118</span>
<span class="cp">#define KEY_PAUSE		119</span>
<span class="cp">#define KEY_SCALE		120	</span><span class="cm">/* AL Compiz Scale (Expose) */</span><span class="cp"></span>

<span class="cp">#define KEY_KPCOMMA		121</span>
<span class="cp">#define KEY_HANGEUL		122</span>
<span class="cp">#define KEY_HANGUEL		KEY_HANGEUL</span>
<span class="cp">#define KEY_HANJA		123</span>
<span class="cp">#define KEY_YEN			124</span>
<span class="cp">#define KEY_LEFTMETA		125</span>
<span class="cp">#define KEY_RIGHTMETA		126</span>
<span class="cp">#define KEY_COMPOSE		127</span>

<span class="cp">#define KEY_STOP		128	</span><span class="cm">/* AC Stop */</span><span class="cp"></span>
<span class="cp">#define KEY_AGAIN		129</span>
<span class="cp">#define KEY_PROPS		130	</span><span class="cm">/* AC Properties */</span><span class="cp"></span>
<span class="cp">#define KEY_UNDO		131	</span><span class="cm">/* AC Undo */</span><span class="cp"></span>
<span class="cp">#define KEY_FRONT		132</span>
<span class="cp">#define KEY_COPY		133	</span><span class="cm">/* AC Copy */</span><span class="cp"></span>
<span class="cp">#define KEY_OPEN		134	</span><span class="cm">/* AC Open */</span><span class="cp"></span>
<span class="cp">#define KEY_PASTE		135	</span><span class="cm">/* AC Paste */</span><span class="cp"></span>
<span class="cp">#define KEY_FIND		136	</span><span class="cm">/* AC Search */</span><span class="cp"></span>
<span class="cp">#define KEY_CUT			137	</span><span class="cm">/* AC Cut */</span><span class="cp"></span>
<span class="cp">#define KEY_HELP		138	</span><span class="cm">/* AL Integrated Help Center */</span><span class="cp"></span>
<span class="cp">#define KEY_MENU		139	</span><span class="cm">/* Menu (show menu) */</span><span class="cp"></span>
<span class="cp">#define KEY_CALC		140	</span><span class="cm">/* AL Calculator */</span><span class="cp"></span>
<span class="cp">#define KEY_SETUP		141</span>
<span class="cp">#define KEY_SLEEP		142	</span><span class="cm">/* SC System Sleep */</span><span class="cp"></span>
<span class="cp">#define KEY_WAKEUP		143	</span><span class="cm">/* System Wake Up */</span><span class="cp"></span>
<span class="cp">#define KEY_FILE		144	</span><span class="cm">/* AL Local Machine Browser */</span><span class="cp"></span>
<span class="cp">#define KEY_SENDFILE		145</span>
<span class="cp">#define KEY_DELETEFILE		146</span>
<span class="cp">#define KEY_XFER		147</span>
<span class="cp">#define KEY_PROG1		148</span>
<span class="cp">#define KEY_PROG2		149</span>
<span class="cp">#define KEY_WWW			150	</span><span class="cm">/* AL Internet Browser */</span><span class="cp"></span>
<span class="cp">#define KEY_MSDOS		151</span>
<span class="cp">#define KEY_COFFEE		152	</span><span class="cm">/* AL Terminal Lock/Screensaver */</span><span class="cp"></span>
<span class="cp">#define KEY_SCREENLOCK		KEY_COFFEE</span>
<span class="cp">#define KEY_ROTATE_DISPLAY	153	</span><span class="cm">/* Display orientation for e.g. tablets */</span><span class="cp"></span>
<span class="cp">#define KEY_DIRECTION		KEY_ROTATE_DISPLAY</span>
<span class="cp">#define KEY_CYCLEWINDOWS	154</span>
<span class="cp">#define KEY_MAIL		155</span>
<span class="cp">#define KEY_BOOKMARKS		156	</span><span class="cm">/* AC Bookmarks */</span><span class="cp"></span>
<span class="cp">#define KEY_COMPUTER		157</span>
<span class="cp">#define KEY_BACK		158	</span><span class="cm">/* AC Back */</span><span class="cp"></span>
<span class="cp">#define KEY_FORWARD		159	</span><span class="cm">/* AC Forward */</span><span class="cp"></span>
<span class="cp">#define KEY_CLOSECD		160</span>
<span class="cp">#define KEY_EJECTCD		161</span>
<span class="cp">#define KEY_EJECTCLOSECD	162</span>
<span class="cp">#define KEY_NEXTSONG		163</span>
<span class="cp">#define KEY_PLAYPAUSE		164</span>
<span class="cp">#define KEY_PREVIOUSSONG	165</span>
<span class="cp">#define KEY_STOPCD		166</span>
<span class="cp">#define KEY_RECORD		167</span>
<span class="cp">#define KEY_REWIND		168</span>
<span class="cp">#define KEY_PHONE		169	</span><span class="cm">/* Media Select Telephone */</span><span class="cp"></span>
<span class="cp">#define KEY_ISO			170</span>
<span class="cp">#define KEY_CONFIG		171	</span><span class="cm">/* AL Consumer Control Configuration */</span><span class="cp"></span>
<span class="cp">#define KEY_HOMEPAGE		172	</span><span class="cm">/* AC Home */</span><span class="cp"></span>
<span class="cp">#define KEY_REFRESH		173	</span><span class="cm">/* AC Refresh */</span><span class="cp"></span>
<span class="cp">#define KEY_EXIT		174	</span><span class="cm">/* AC Exit */</span><span class="cp"></span>
<span class="cp">#define KEY_MOVE		175</span>
<span class="cp">#define KEY_EDIT		176</span>
<span class="cp">#define KEY_SCROLLUP		177</span>
<span class="cp">#define KEY_SCROLLDOWN		178</span>
<span class="cp">#define KEY_KPLEFTPAREN		179</span>
<span class="cp">#define KEY_KPRIGHTPAREN	180</span>
<span class="cp">#define KEY_NEW			181	</span><span class="cm">/* AC New */</span><span class="cp"></span>
<span class="cp">#define KEY_REDO		182	</span><span class="cm">/* AC Redo/Repeat */</span><span class="cp"></span>

<span class="cp">#define KEY_F13			183</span>
<span class="cp">#define KEY_F14			184</span>
<span class="cp">#define KEY_F15			185</span>
<span class="cp">#define KEY_F16			186</span>
<span class="cp">#define KEY_F17			187</span>
<span class="cp">#define KEY_F18			188</span>
<span class="cp">#define KEY_F19			189</span>
<span class="cp">#define KEY_F20			190</span>
<span class="cp">#define KEY_F21			191</span>
<span class="cp">#define KEY_F22			192</span>
<span class="cp">#define KEY_F23			193</span>
<span class="cp">#define KEY_F24			194</span>

<span class="cp">#define KEY_PLAYCD		200</span>
<span class="cp">#define KEY_PAUSECD		201</span>
<span class="cp">#define KEY_PROG3		202</span>
<span class="cp">#define KEY_PROG4		203</span>
<span class="cp">#define KEY_DASHBOARD		204	</span><span class="cm">/* AL Dashboard */</span><span class="cp"></span>
<span class="cp">#define KEY_SUSPEND		205</span>
<span class="cp">#define KEY_CLOSE		206	</span><span class="cm">/* AC Close */</span><span class="cp"></span>
<span class="cp">#define KEY_PLAY		207</span>
<span class="cp">#define KEY_FASTFORWARD		208</span>
<span class="cp">#define KEY_BASSBOOST		209</span>
<span class="cp">#define KEY_PRINT		210	</span><span class="cm">/* AC Print */</span><span class="cp"></span>
<span class="cp">#define KEY_HP			211</span>
<span class="cp">#define KEY_CAMERA		212</span>
<span class="cp">#define KEY_SOUND		213</span>
<span class="cp">#define KEY_QUESTION		214</span>
<span class="cp">#define KEY_EMAIL		215</span>
<span class="cp">#define KEY_CHAT		216</span>
<span class="cp">#define KEY_SEARCH		217</span>
<span class="cp">#define KEY_CONNECT		218</span>
<span class="cp">#define KEY_FINANCE		219	</span><span class="cm">/* AL Checkbook/Finance */</span><span class="cp"></span>
<span class="cp">#define KEY_SPORT		220</span>
<span class="cp">#define KEY_SHOP		221</span>
<span class="cp">#define KEY_ALTERASE		222</span>
<span class="cp">#define KEY_CANCEL		223	</span><span class="cm">/* AC Cancel */</span><span class="cp"></span>
<span class="cp">#define KEY_BRIGHTNESSDOWN	224</span>
<span class="cp">#define KEY_BRIGHTNESSUP	225</span>
<span class="cp">#define KEY_MEDIA		226</span>

<span class="cp">#define KEY_SWITCHVIDEOMODE	227	</span><span class="cm">/* Cycle between available video</span>
<span class="cm">					   outputs (Monitor/LCD/TV-out/etc) */</span><span class="cp"></span>
<span class="cp">#define KEY_KBDILLUMTOGGLE	228</span>
<span class="cp">#define KEY_KBDILLUMDOWN	229</span>
<span class="cp">#define KEY_KBDILLUMUP		230</span>

<span class="cp">#define KEY_SEND		231	</span><span class="cm">/* AC Send */</span><span class="cp"></span>
<span class="cp">#define KEY_REPLY		232	</span><span class="cm">/* AC Reply */</span><span class="cp"></span>
<span class="cp">#define KEY_FORWARDMAIL		233	</span><span class="cm">/* AC Forward Msg */</span><span class="cp"></span>
<span class="cp">#define KEY_SAVE		234	</span><span class="cm">/* AC Save */</span><span class="cp"></span>
<span class="cp">#define KEY_DOCUMENTS		235</span>

<span class="cp">#define KEY_BATTERY		236</span>

<span class="cp">#define KEY_BLUETOOTH		237</span>
<span class="cp">#define KEY_WLAN		238</span>
<span class="cp">#define KEY_UWB			239</span>

<span class="cp">#define KEY_UNKNOWN		240</span>

<span class="cp">#define KEY_VIDEO_NEXT		241	</span><span class="cm">/* drive next video source */</span><span class="cp"></span>
<span class="cp">#define KEY_VIDEO_PREV		242	</span><span class="cm">/* drive previous video source */</span><span class="cp"></span>
<span class="cp">#define KEY_BRIGHTNESS_CYCLE	243	</span><span class="cm">/* brightness up, after max is min */</span><span class="cp"></span>
<span class="cp">#define KEY_BRIGHTNESS_AUTO	244	</span><span class="cm">/* Set Auto Brightness: manual</span>
<span class="cm">					  brightness control is off,</span>
<span class="cm">					  rely on ambient */</span><span class="cp"></span>
<span class="cp">#define KEY_BRIGHTNESS_ZERO	KEY_BRIGHTNESS_AUTO</span>
<span class="cp">#define KEY_DISPLAY_OFF		245	</span><span class="cm">/* display device to off state */</span><span class="cp"></span>

<span class="cp">#define KEY_WWAN		246	</span><span class="cm">/* Wireless WAN (LTE, UMTS, GSM, etc.) */</span><span class="cp"></span>
<span class="cp">#define KEY_WIMAX		KEY_WWAN</span>
<span class="cp">#define KEY_RFKILL		247	</span><span class="cm">/* Key that controls all radios */</span><span class="cp"></span>

<span class="cp">#define KEY_MICMUTE		248	</span><span class="cm">/* Mute / unmute the microphone */</span><span class="cp"></span>

<span class="cm">/* Code 255 is reserved for special needs of AT keyboard driver */</span>

<span class="cp">#define BTN_MISC		0x100</span>
<span class="cp">#define BTN_0			0x100</span>
<span class="cp">#define BTN_1			0x101</span>
<span class="cp">#define BTN_2			0x102</span>
<span class="cp">#define BTN_3			0x103</span>
<span class="cp">#define BTN_4			0x104</span>
<span class="cp">#define BTN_5			0x105</span>
<span class="cp">#define BTN_6			0x106</span>
<span class="cp">#define BTN_7			0x107</span>
<span class="cp">#define BTN_8			0x108</span>
<span class="cp">#define BTN_9			0x109</span>

<span class="cp">#define BTN_MOUSE		0x110</span>
<span class="cp">#define BTN_LEFT		0x110</span>
<span class="cp">#define BTN_RIGHT		0x111</span>
<span class="cp">#define BTN_MIDDLE		0x112</span>
<span class="cp">#define BTN_SIDE		0x113</span>
<span class="cp">#define BTN_EXTRA		0x114</span>
<span class="cp">#define BTN_FORWARD		0x115</span>
<span class="cp">#define BTN_BACK		0x116</span>
<span class="cp">#define BTN_TASK		0x117</span>

<span class="cp">#define BTN_JOYSTICK		0x120</span>
<span class="cp">#define BTN_TRIGGER		0x120</span>
<span class="cp">#define BTN_THUMB		0x121</span>
<span class="cp">#define BTN_THUMB2		0x122</span>
<span class="cp">#define BTN_TOP			0x123</span>
<span class="cp">#define BTN_TOP2		0x124</span>
<span class="cp">#define BTN_PINKIE		0x125</span>
<span class="cp">#define BTN_BASE		0x126</span>
<span class="cp">#define BTN_BASE2		0x127</span>
<span class="cp">#define BTN_BASE3		0x128</span>
<span class="cp">#define BTN_BASE4		0x129</span>
<span class="cp">#define BTN_BASE5		0x12a</span>
<span class="cp">#define BTN_BASE6		0x12b</span>
<span class="cp">#define BTN_DEAD		0x12f</span>

<span class="cp">#define BTN_GAMEPAD		0x130</span>
<span class="cp">#define BTN_SOUTH		0x130</span>
<span class="cp">#define BTN_A			BTN_SOUTH</span>
<span class="cp">#define BTN_EAST		0x131</span>
<span class="cp">#define BTN_B			BTN_EAST</span>
<span class="cp">#define BTN_C			0x132</span>
<span class="cp">#define BTN_NORTH		0x133</span>
<span class="cp">#define BTN_X			BTN_NORTH</span>
<span class="cp">#define BTN_WEST		0x134</span>
<span class="cp">#define BTN_Y			BTN_WEST</span>
<span class="cp">#define BTN_Z			0x135</span>
<span class="cp">#define BTN_TL			0x136</span>
<span class="cp">#define BTN_TR			0x137</span>
<span class="cp">#define BTN_TL2			0x138</span>
<span class="cp">#define BTN_TR2			0x139</span>
<span class="cp">#define BTN_SELECT		0x13a</span>
<span class="cp">#define BTN_START		0x13b</span>
<span class="cp">#define BTN_MODE		0x13c</span>
<span class="cp">#define BTN_THUMBL		0x13d</span>
<span class="cp">#define BTN_THUMBR		0x13e</span>

<span class="cp">#define BTN_DIGI		0x140</span>
<span class="cp">#define BTN_TOOL_PEN		0x140</span>
<span class="cp">#define BTN_TOOL_RUBBER		0x141</span>
<span class="cp">#define BTN_TOOL_BRUSH		0x142</span>
<span class="cp">#define BTN_TOOL_PENCIL		0x143</span>
<span class="cp">#define BTN_TOOL_AIRBRUSH	0x144</span>
<span class="cp">#define BTN_TOOL_FINGER		0x145</span>
<span class="cp">#define BTN_TOOL_MOUSE		0x146</span>
<span class="cp">#define BTN_TOOL_LENS		0x147</span>
<span class="cp">#define BTN_TOOL_QUINTTAP	0x148	</span><span class="cm">/* Five fingers on trackpad */</span><span class="cp"></span>
<span class="cp">#define BTN_STYLUS3		0x149</span>
<span class="cp">#define BTN_TOUCH		0x14a</span>
<span class="cp">#define BTN_STYLUS		0x14b</span>
<span class="cp">#define BTN_STYLUS2		0x14c</span>
<span class="cp">#define BTN_TOOL_DOUBLETAP	0x14d</span>
<span class="cp">#define BTN_TOOL_TRIPLETAP	0x14e</span>
<span class="cp">#define BTN_TOOL_QUADTAP	0x14f	</span><span class="cm">/* Four fingers on trackpad */</span><span class="cp"></span>

<span class="cp">#define BTN_WHEEL		0x150</span>
<span class="cp">#define BTN_GEAR_DOWN		0x150</span>
<span class="cp">#define BTN_GEAR_UP		0x151</span>

<span class="cp">#define KEY_OK			0x160</span>
<span class="cp">#define KEY_SELECT		0x161</span>
<span class="cp">#define KEY_GOTO		0x162</span>
<span class="cp">#define KEY_CLEAR		0x163</span>
<span class="cp">#define KEY_POWER2		0x164</span>
<span class="cp">#define KEY_OPTION		0x165</span>
<span class="cp">#define KEY_INFO		0x166	</span><span class="cm">/* AL OEM Features/Tips/Tutorial */</span><span class="cp"></span>
<span class="cp">#define KEY_TIME		0x167</span>
<span class="cp">#define KEY_VENDOR		0x168</span>
<span class="cp">#define KEY_ARCHIVE		0x169</span>
<span class="cp">#define KEY_PROGRAM		0x16a	</span><span class="cm">/* Media Select Program Guide */</span><span class="cp"></span>
<span class="cp">#define KEY_CHANNEL		0x16b</span>
<span class="cp">#define KEY_FAVORITES		0x16c</span>
<span class="cp">#define KEY_EPG			0x16d</span>
<span class="cp">#define KEY_PVR			0x16e	</span><span class="cm">/* Media Select Home */</span><span class="cp"></span>
<span class="cp">#define KEY_MHP			0x16f</span>
<span class="cp">#define KEY_LANGUAGE		0x170</span>
<span class="cp">#define KEY_TITLE		0x171</span>
<span class="cp">#define KEY_SUBTITLE		0x172</span>
<span class="cp">#define KEY_ANGLE		0x173</span>
<span class="cp">#define KEY_FULL_SCREEN		0x174	</span><span class="cm">/* AC View Toggle */</span><span class="cp"></span>
<span class="cp">#define KEY_ZOOM		KEY_FULL_SCREEN</span>
<span class="cp">#define KEY_MODE		0x175</span>
<span class="cp">#define KEY_KEYBOARD		0x176</span>
<span class="cp">#define KEY_ASPECT_RATIO	0x177	</span><span class="cm">/* HUTRR37: Aspect */</span><span class="cp"></span>
<span class="cp">#define KEY_SCREEN		KEY_ASPECT_RATIO</span>
<span class="cp">#define KEY_PC			0x178	</span><span class="cm">/* Media Select Computer */</span><span class="cp"></span>
<span class="cp">#define KEY_TV			0x179	</span><span class="cm">/* Media Select TV */</span><span class="cp"></span>
<span class="cp">#define KEY_TV2			0x17a	</span><span class="cm">/* Media Select Cable */</span><span class="cp"></span>
<span class="cp">#define KEY_VCR			0x17b	</span><span class="cm">/* Media Select VCR */</span><span class="cp"></span>
<span class="cp">#define KEY_VCR2		0x17c	</span><span class="cm">/* VCR Plus */</span><span class="cp"></span>
<span class="cp">#define KEY_SAT			0x17d	</span><span class="cm">/* Media Select Satellite */</span><span class="cp"></span>
<span class="cp">#define KEY_SAT2		0x17e</span>
<span class="cp">#define KEY_CD			0x17f	</span><span class="cm">/* Media Select CD */</span><span class="cp"></span>
<span class="cp">#define KEY_TAPE		0x180	</span><span class="cm">/* Media Select Tape */</span><span class="cp"></span>
<span class="cp">#define KEY_RADIO		0x181</span>
<span class="cp">#define KEY_TUNER		0x182	</span><span class="cm">/* Media Select Tuner */</span><span class="cp"></span>
<span class="cp">#define KEY_PLAYER		0x183</span>
<span class="cp">#define KEY_TEXT		0x184</span>
<span class="cp">#define KEY_DVD			0x185	</span><span class="cm">/* Media Select DVD */</span><span class="cp"></span>
<span class="cp">#define KEY_AUX			0x186</span>
<span class="cp">#define KEY_MP3			0x187</span>
<span class="cp">#define KEY_AUDIO		0x188	</span><span class="cm">/* AL Audio Browser */</span><span class="cp"></span>
<span class="cp">#define KEY_VIDEO		0x189	</span><span class="cm">/* AL Movie Browser */</span><span class="cp"></span>
<span class="cp">#define KEY_DIRECTORY		0x18a</span>
<span class="cp">#define KEY_LIST		0x18b</span>
<span class="cp">#define KEY_MEMO		0x18c	</span><span class="cm">/* Media Select Messages */</span><span class="cp"></span>
<span class="cp">#define KEY_CALENDAR		0x18d</span>
<span class="cp">#define KEY_RED			0x18e</span>
<span class="cp">#define KEY_GREEN		0x18f</span>
<span class="cp">#define KEY_YELLOW		0x190</span>
<span class="cp">#define KEY_BLUE		0x191</span>
<span class="cp">#define KEY_CHANNELUP		0x192	</span><span class="cm">/* Channel Increment */</span><span class="cp"></span>
<span class="cp">#define KEY_CHANNELDOWN		0x193	</span><span class="cm">/* Channel Decrement */</span><span class="cp"></span>
<span class="cp">#define KEY_FIRST		0x194</span>
<span class="cp">#define KEY_LAST		0x195	</span><span class="cm">/* Recall Last */</span><span class="cp"></span>
<span class="cp">#define KEY_AB			0x196</span>
<span class="cp">#define KEY_NEXT		0x197</span>
<span class="cp">#define KEY_RESTART		0x198</span>
<span class="cp">#define KEY_SLOW		0x199</span>
<span class="cp">#define KEY_SHUFFLE		0x19a</span>
<span class="cp">#define KEY_BREAK		0x19b</span>
<span class="cp">#define KEY_PREVIOUS		0x19c</span>
<span class="cp">#define KEY_DIGITS		0x19d</span>
<span class="cp">#define KEY_TEEN		0x19e</span>
<span class="cp">#define KEY_TWEN		0x19f</span>
<span class="cp">#define KEY_VIDEOPHONE		0x1a0	</span><span class="cm">/* Media Select Video Phone */</span><span class="cp"></span>
<span class="cp">#define KEY_GAMES		0x1a1	</span><span class="cm">/* Media Select Games */</span><span class="cp"></span>
<span class="cp">#define KEY_ZOOMIN		0x1a2	</span><span class="cm">/* AC Zoom In */</span><span class="cp"></span>
<span class="cp">#define KEY_ZOOMOUT		0x1a3	</span><span class="cm">/* AC Zoom Out */</span><span class="cp"></span>
<span class="cp">#define KEY_ZOOMRESET		0x1a4	</span><span class="cm">/* AC Zoom */</span><span class="cp"></span>
<span class="cp">#define KEY_WORDPROCESSOR	0x1a5	</span><span class="cm">/* AL Word Processor */</span><span class="cp"></span>
<span class="cp">#define KEY_EDITOR		0x1a6	</span><span class="cm">/* AL Text Editor */</span><span class="cp"></span>
<span class="cp">#define KEY_SPREADSHEET		0x1a7	</span><span class="cm">/* AL Spreadsheet */</span><span class="cp"></span>
<span class="cp">#define KEY_GRAPHICSEDITOR	0x1a8	</span><span class="cm">/* AL Graphics Editor */</span><span class="cp"></span>
<span class="cp">#define KEY_PRESENTATION	0x1a9	</span><span class="cm">/* AL Presentation App */</span><span class="cp"></span>
<span class="cp">#define KEY_DATABASE		0x1aa	</span><span class="cm">/* AL Database App */</span><span class="cp"></span>
<span class="cp">#define KEY_NEWS		0x1ab	</span><span class="cm">/* AL Newsreader */</span><span class="cp"></span>
<span class="cp">#define KEY_VOICEMAIL		0x1ac	</span><span class="cm">/* AL Voicemail */</span><span class="cp"></span>
<span class="cp">#define KEY_ADDRESSBOOK		0x1ad	</span><span class="cm">/* AL Contacts/Address Book */</span><span class="cp"></span>
<span class="cp">#define KEY_MESSENGER		0x1ae	</span><span class="cm">/* AL Instant Messaging */</span><span class="cp"></span>
<span class="cp">#define KEY_DISPLAYTOGGLE	0x1af	</span><span class="cm">/* Turn display (LCD) on and off */</span><span class="cp"></span>
<span class="cp">#define KEY_BRIGHTNESS_TOGGLE	KEY_DISPLAYTOGGLE</span>
<span class="cp">#define KEY_SPELLCHECK		0x1b0   </span><span class="cm">/* AL Spell Check */</span><span class="cp"></span>
<span class="cp">#define KEY_LOGOFF		0x1b1   </span><span class="cm">/* AL Logoff */</span><span class="cp"></span>

<span class="cp">#define KEY_DOLLAR		0x1b2</span>
<span class="cp">#define KEY_EURO		0x1b3</span>

<span class="cp">#define KEY_FRAMEBACK		0x1b4	</span><span class="cm">/* Consumer - transport controls */</span><span class="cp"></span>
<span class="cp">#define KEY_FRAMEFORWARD	0x1b5</span>
<span class="cp">#define KEY_CONTEXT_MENU	0x1b6	</span><span class="cm">/* GenDesc - system context menu */</span><span class="cp"></span>
<span class="cp">#define KEY_MEDIA_REPEAT	0x1b7	</span><span class="cm">/* Consumer - transport control */</span><span class="cp"></span>
<span class="cp">#define KEY_10CHANNELSUP	0x1b8	</span><span class="cm">/* 10 channels up (10+) */</span><span class="cp"></span>
<span class="cp">#define KEY_10CHANNELSDOWN	0x1b9	</span><span class="cm">/* 10 channels down (10-) */</span><span class="cp"></span>
<span class="cp">#define KEY_IMAGES		0x1ba	</span><span class="cm">/* AL Image Browser */</span><span class="cp"></span>
<span class="cp">#define KEY_NOTIFICATION_CENTER	0x1bc	</span><span class="cm">/* Show/hide the notification center */</span><span class="cp"></span>
<span class="cp">#define KEY_PICKUP_PHONE	0x1bd	</span><span class="cm">/* Answer incoming call */</span><span class="cp"></span>
<span class="cp">#define KEY_HANGUP_PHONE	0x1be	</span><span class="cm">/* Decline incoming call */</span><span class="cp"></span>

<span class="cp">#define KEY_DEL_EOL		0x1c0</span>
<span class="cp">#define KEY_DEL_EOS		0x1c1</span>
<span class="cp">#define KEY_INS_LINE		0x1c2</span>
<span class="cp">#define KEY_DEL_LINE		0x1c3</span>

<span class="cp">#define KEY_FN			0x1d0</span>
<span class="cp">#define KEY_FN_ESC		0x1d1</span>
<span class="cp">#define KEY_FN_F1		0x1d2</span>
<span class="cp">#define KEY_FN_F2		0x1d3</span>
<span class="cp">#define KEY_FN_F3		0x1d4</span>
<span class="cp">#define KEY_FN_F4		0x1d5</span>
<span class="cp">#define KEY_FN_F5		0x1d6</span>
<span class="cp">#define KEY_FN_F6		0x1d7</span>
<span class="cp">#define KEY_FN_F7		0x1d8</span>
<span class="cp">#define KEY_FN_F8		0x1d9</span>
<span class="cp">#define KEY_FN_F9		0x1da</span>
<span class="cp">#define KEY_FN_F10		0x1db</span>
<span class="cp">#define KEY_FN_F11		0x1dc</span>
<span class="cp">#define KEY_FN_F12		0x1dd</span>
<span class="cp">#define KEY_FN_1		0x1de</span>
<span class="cp">#define KEY_FN_2		0x1df</span>
<span class="cp">#define KEY_FN_D		0x1e0</span>
<span class="cp">#define KEY_FN_E		0x1e1</span>
<span class="cp">#define KEY_FN_F		0x1e2</span>
<span class="cp">#define KEY_FN_S		0x1e3</span>
<span class="cp">#define KEY_FN_B		0x1e4</span>
<span class="cp">#define KEY_FN_RIGHT_SHIFT	0x1e5</span>

<span class="cp">#define KEY_BRL_DOT1		0x1f1</span>
<span class="cp">#define KEY_BRL_DOT2		0x1f2</span>
<span class="cp">#define KEY_BRL_DOT3		0x1f3</span>
<span class="cp">#define KEY_BRL_DOT4		0x1f4</span>
<span class="cp">#define KEY_BRL_DOT5		0x1f5</span>
<span class="cp">#define KEY_BRL_DOT6		0x1f6</span>
<span class="cp">#define KEY_BRL_DOT7		0x1f7</span>
<span class="cp">#define KEY_BRL_DOT8		0x1f8</span>
<span class="cp">#define KEY_BRL_DOT9		0x1f9</span>
<span class="cp">#define KEY_BRL_DOT10		0x1fa</span>

<span class="cp">#define KEY_NUMERIC_0		0x200	</span><span class="cm">/* used by phones, remote controls, */</span><span class="cp"></span>
<span class="cp">#define KEY_NUMERIC_1		0x201	</span><span class="cm">/* and other keypads */</span><span class="cp"></span>
<span class="cp">#define KEY_NUMERIC_2		0x202</span>
<span class="cp">#define KEY_NUMERIC_3		0x203</span>
<span class="cp">#define KEY_NUMERIC_4		0x204</span>
<span class="cp">#define KEY_NUMERIC_5		0x205</span>
<span class="cp">#define KEY_NUMERIC_6		0x206</span>
<span class="cp">#define KEY_NUMERIC_7		0x207</span>
<span class="cp">#define KEY_NUMERIC_8		0x208</span>
<span class="cp">#define KEY_NUMERIC_9		0x209</span>
<span class="cp">#define KEY_NUMERIC_STAR	0x20a</span>
<span class="cp">#define KEY_NUMERIC_POUND	0x20b</span>
<span class="cp">#define KEY_NUMERIC_A		0x20c	</span><span class="cm">/* Phone key A - HUT Telephony 0xb9 */</span><span class="cp"></span>
<span class="cp">#define KEY_NUMERIC_B		0x20d</span>
<span class="cp">#define KEY_NUMERIC_C		0x20e</span>
<span class="cp">#define KEY_NUMERIC_D		0x20f</span>

<span class="cp">#define KEY_CAMERA_FOCUS	0x210</span>
<span class="cp">#define KEY_WPS_BUTTON		0x211	</span><span class="cm">/* WiFi Protected Setup key */</span><span class="cp"></span>

<span class="cp">#define KEY_TOUCHPAD_TOGGLE	0x212	</span><span class="cm">/* Request switch touchpad on or off */</span><span class="cp"></span>
<span class="cp">#define KEY_TOUCHPAD_ON		0x213</span>
<span class="cp">#define KEY_TOUCHPAD_OFF	0x214</span>

<span class="cp">#define KEY_CAMERA_ZOOMIN	0x215</span>
<span class="cp">#define KEY_CAMERA_ZOOMOUT	0x216</span>
<span class="cp">#define KEY_CAMERA_UP		0x217</span>
<span class="cp">#define KEY_CAMERA_DOWN		0x218</span>
<span class="cp">#define KEY_CAMERA_LEFT		0x219</span>
<span class="cp">#define KEY_CAMERA_RIGHT	0x21a</span>

<span class="cp">#define KEY_ATTENDANT_ON	0x21b</span>
<span class="cp">#define KEY_ATTENDANT_OFF	0x21c</span>
<span class="cp">#define KEY_ATTENDANT_TOGGLE	0x21d	</span><span class="cm">/* Attendant call on or off */</span><span class="cp"></span>
<span class="cp">#define KEY_LIGHTS_TOGGLE	0x21e	</span><span class="cm">/* Reading light on or off */</span><span class="cp"></span>

<span class="cp">#define BTN_DPAD_UP		0x220</span>
<span class="cp">#define BTN_DPAD_DOWN		0x221</span>
<span class="cp">#define BTN_DPAD_LEFT		0x222</span>
<span class="cp">#define BTN_DPAD_RIGHT		0x223</span>

<span class="cp">#define KEY_ALS_TOGGLE		0x230	</span><span class="cm">/* Ambient light sensor */</span><span class="cp"></span>
<span class="cp">#define KEY_ROTATE_LOCK_TOGGLE	0x231	</span><span class="cm">/* Display rotation lock */</span><span class="cp"></span>

<span class="cp">#define KEY_BUTTONCONFIG		0x240	</span><span class="cm">/* AL Button Configuration */</span><span class="cp"></span>
<span class="cp">#define KEY_TASKMANAGER		0x241	</span><span class="cm">/* AL Task/Project Manager */</span><span class="cp"></span>
<span class="cp">#define KEY_JOURNAL		0x242	</span><span class="cm">/* AL Log/Journal/Timecard */</span><span class="cp"></span>
<span class="cp">#define KEY_CONTROLPANEL		0x243	</span><span class="cm">/* AL Control Panel */</span><span class="cp"></span>
<span class="cp">#define KEY_APPSELECT		0x244	</span><span class="cm">/* AL Select Task/Application */</span><span class="cp"></span>
<span class="cp">#define KEY_SCREENSAVER		0x245	</span><span class="cm">/* AL Screen Saver */</span><span class="cp"></span>
<span class="cp">#define KEY_VOICECOMMAND		0x246	</span><span class="cm">/* Listening Voice Command */</span><span class="cp"></span>
<span class="cp">#define KEY_ASSISTANT		0x247	</span><span class="cm">/* AL Context-aware desktop assistant */</span><span class="cp"></span>
<span class="cp">#define KEY_KBD_LAYOUT_NEXT	0x248	</span><span class="cm">/* AC Next Keyboard Layout Select */</span><span class="cp"></span>
<span class="cp">#define KEY_EMOJI_PICKER	0x249	</span><span class="cm">/* Show/hide emoji picker (HUTRR101) */</span><span class="cp"></span>

<span class="cp">#define KEY_BRIGHTNESS_MIN		0x250	</span><span class="cm">/* Set Brightness to Minimum */</span><span class="cp"></span>
<span class="cp">#define KEY_BRIGHTNESS_MAX		0x251	</span><span class="cm">/* Set Brightness to Maximum */</span><span class="cp"></span>

<span class="cp">#define KEY_KBDINPUTASSIST_PREV		0x260</span>
<span class="cp">#define KEY_KBDINPUTASSIST_NEXT		0x261</span>
<span class="cp">#define KEY_KBDINPUTASSIST_PREVGROUP		0x262</span>
<span class="cp">#define KEY_KBDINPUTASSIST_NEXTGROUP		0x263</span>
<span class="cp">#define KEY_KBDINPUTASSIST_ACCEPT		0x264</span>
<span class="cp">#define KEY_KBDINPUTASSIST_CANCEL		0x265</span>

<span class="cm">/* Diagonal movement keys */</span>
<span class="cp">#define KEY_RIGHT_UP			0x266</span>
<span class="cp">#define KEY_RIGHT_DOWN			0x267</span>
<span class="cp">#define KEY_LEFT_UP			0x268</span>
<span class="cp">#define KEY_LEFT_DOWN			0x269</span>

<span class="cp">#define KEY_ROOT_MENU			0x26a </span><span class="cm">/* Show Device&#39;s Root Menu */</span><span class="cp"></span>
<span class="cm">/* Show Top Menu of the Media (e.g. DVD) */</span>
<span class="cp">#define KEY_MEDIA_TOP_MENU		0x26b</span>
<span class="cp">#define KEY_NUMERIC_11			0x26c</span>
<span class="cp">#define KEY_NUMERIC_12			0x26d</span>
<span class="cm">/*</span>
<span class="cm"> * Toggle Audio Description: refers to an audio service that helps blind and</span>
<span class="cm"> * visually impaired consumers understand the action in a program. Note: in</span>
<span class="cm"> * some countries this is referred to as &quot;Video Description&quot;.</span>
<span class="cm"> */</span>
<span class="cp">#define KEY_AUDIO_DESC			0x26e</span>
<span class="cp">#define KEY_3D_MODE			0x26f</span>
<span class="cp">#define KEY_NEXT_FAVORITE		0x270</span>
<span class="cp">#define KEY_STOP_RECORD			0x271</span>
<span class="cp">#define KEY_PAUSE_RECORD		0x272</span>
<span class="cp">#define KEY_VOD				0x273 </span><span class="cm">/* Video on Demand */</span><span class="cp"></span>
<span class="cp">#define KEY_UNMUTE			0x274</span>
<span class="cp">#define KEY_FASTREVERSE			0x275</span>
<span class="cp">#define KEY_SLOWREVERSE			0x276</span>
<span class="cm">/*</span>
<span class="cm"> * Control a data application associated with the currently viewed channel,</span>
<span class="cm"> * e.g. teletext or data broadcast application (MHEG, MHP, HbbTV, etc.)</span>
<span class="cm"> */</span>
<span class="cp">#define KEY_DATA			0x277</span>
<span class="cp">#define KEY_ONSCREEN_KEYBOARD		0x278</span>
<span class="cm">/* Electronic privacy screen control */</span>
<span class="cp">#define KEY_PRIVACY_SCREEN_TOGGLE	0x279</span>

<span class="cm">/* Select an area of screen to be copied */</span>
<span class="cp">#define KEY_SELECTIVE_SCREENSHOT	0x27a</span>

<span class="cm">/*</span>
<span class="cm"> * Some keyboards have keys which do not have a defined meaning, these keys</span>
<span class="cm"> * are intended to be programmed / bound to macros by the user. For most</span>
<span class="cm"> * keyboards with these macro-keys the key-sequence to inject, or action to</span>
<span class="cm"> * take, is all handled by software on the host side. So from the kernel&#39;s</span>
<span class="cm"> * point of view these are just normal keys.</span>
<span class="cm"> *</span>
<span class="cm"> * The KEY_MACRO# codes below are intended for such keys, which may be labeled</span>
<span class="cm"> * e.g. G1-G18, or S1 - S30. The KEY_MACRO# codes MUST NOT be used for keys</span>
<span class="cm"> * where the marking on the key does indicate a defined meaning / purpose.</span>
<span class="cm"> *</span>
<span class="cm"> * The KEY_MACRO# codes MUST also NOT be used as fallback for when no existing</span>
<span class="cm"> * KEY_FOO define matches the marking / purpose. In this case a new KEY_FOO</span>
<span class="cm"> * define MUST be added.</span>
<span class="cm"> */</span>
<span class="cp">#define KEY_MACRO1			0x290</span>
<span class="cp">#define KEY_MACRO2			0x291</span>
<span class="cp">#define KEY_MACRO3			0x292</span>
<span class="cp">#define KEY_MACRO4			0x293</span>
<span class="cp">#define KEY_MACRO5			0x294</span>
<span class="cp">#define KEY_MACRO6			0x295</span>
<span class="cp">#define KEY_MACRO7			0x296</span>
<span class="cp">#define KEY_MACRO8			0x297</span>
<span class="cp">#define KEY_MACRO9			0x298</span>
<span class="cp">#define KEY_MACRO10			0x299</span>
<span class="cp">#define KEY_MACRO11			0x29a</span>
<span class="cp">#define KEY_MACRO12			0x29b</span>
<span class="cp">#define KEY_MACRO13			0x29c</span>
<span class="cp">#define KEY_MACRO14			0x29d</span>
<span class="cp">#define KEY_MACRO15			0x29e</span>
<span class="cp">#define KEY_MACRO16			0x29f</span>
<span class="cp">#define KEY_MACRO17			0x2a0</span>
<span class="cp">#define KEY_MACRO18			0x2a1</span>
<span class="cp">#define KEY_MACRO19			0x2a2</span>
<span class="cp">#define KEY_MACRO20			0x2a3</span>
<span class="cp">#define KEY_MACRO21			0x2a4</span>
<span class="cp">#define KEY_MACRO22			0x2a5</span>
<span class="cp">#define KEY_MACRO23			0x2a6</span>
<span class="cp">#define KEY_MACRO24			0x2a7</span>
<span class="cp">#define KEY_MACRO25			0x2a8</span>
<span class="cp">#define KEY_MACRO26			0x2a9</span>
<span class="cp">#define KEY_MACRO27			0x2aa</span>
<span class="cp">#define KEY_MACRO28			0x2ab</span>
<span class="cp">#define KEY_MACRO29			0x2ac</span>
<span class="cp">#define KEY_MACRO30			0x2ad</span>

<span class="cm">/*</span>
<span class="cm"> * Some keyboards with the macro-keys described above have some extra keys</span>
<span class="cm"> * for controlling the host-side software responsible for the macro handling:</span>
<span class="cm"> * -A macro recording start/stop key. Note that not all keyboards which emit</span>
<span class="cm"> *  KEY_MACRO_RECORD_START will also emit KEY_MACRO_RECORD_STOP if</span>
<span class="cm"> *  KEY_MACRO_RECORD_STOP is not advertised, then KEY_MACRO_RECORD_START</span>
<span class="cm"> *  should be interpreted as a recording start/stop toggle;</span>
<span class="cm"> * -Keys for switching between different macro (pre)sets, either a key for</span>
<span class="cm"> *  cycling through the configured presets or keys to directly select a preset.</span>
<span class="cm"> */</span>
<span class="cp">#define KEY_MACRO_RECORD_START		0x2b0</span>
<span class="cp">#define KEY_MACRO_RECORD_STOP		0x2b1</span>
<span class="cp">#define KEY_MACRO_PRESET_CYCLE		0x2b2</span>
<span class="cp">#define KEY_MACRO_PRESET1		0x2b3</span>
<span class="cp">#define KEY_MACRO_PRESET2		0x2b4</span>
<span class="cp">#define KEY_MACRO_PRESET3		0x2b5</span>

<span class="cm">/*</span>
<span class="cm"> * Some keyboards have a buildin LCD panel where the contents are controlled</span>
<span class="cm"> * by the host. Often these have a number of keys directly below the LCD</span>
<span class="cm"> * intended for controlling a menu shown on the LCD. These keys often don&#39;t</span>
<span class="cm"> * have any labeling so we just name them KEY_KBD_LCD_MENU#</span>
<span class="cm"> */</span>
<span class="cp">#define KEY_KBD_LCD_MENU1		0x2b8</span>
<span class="cp">#define KEY_KBD_LCD_MENU2		0x2b9</span>
<span class="cp">#define KEY_KBD_LCD_MENU3		0x2ba</span>
<span class="cp">#define KEY_KBD_LCD_MENU4		0x2bb</span>
<span class="cp">#define KEY_KBD_LCD_MENU5		0x2bc</span>

<span class="cp">#define BTN_TRIGGER_HAPPY		0x2c0</span>
<span class="cp">#define BTN_TRIGGER_HAPPY1		0x2c0</span>
<span class="cp">#define BTN_TRIGGER_HAPPY2		0x2c1</span>
<span class="cp">#define BTN_TRIGGER_HAPPY3		0x2c2</span>
<span class="cp">#define BTN_TRIGGER_HAPPY4		0x2c3</span>
<span class="cp">#define BTN_TRIGGER_HAPPY5		0x2c4</span>
<span class="cp">#define BTN_TRIGGER_HAPPY6		0x2c5</span>
<span class="cp">#define BTN_TRIGGER_HAPPY7		0x2c6</span>
<span class="cp">#define BTN_TRIGGER_HAPPY8		0x2c7</span>
<span class="cp">#define BTN_TRIGGER_HAPPY9		0x2c8</span>
<span class="cp">#define BTN_TRIGGER_HAPPY10		0x2c9</span>
<span class="cp">#define BTN_TRIGGER_HAPPY11		0x2ca</span>
<span class="cp">#define BTN_TRIGGER_HAPPY12		0x2cb</span>
<span class="cp">#define BTN_TRIGGER_HAPPY13		0x2cc</span>
<span class="cp">#define BTN_TRIGGER_HAPPY14		0x2cd</span>
<span class="cp">#define BTN_TRIGGER_HAPPY15		0x2ce</span>
<span class="cp">#define BTN_TRIGGER_HAPPY16		0x2cf</span>
<span class="cp">#define BTN_TRIGGER_HAPPY17		0x2d0</span>
<span class="cp">#define BTN_TRIGGER_HAPPY18		0x2d1</span>
<span class="cp">#define BTN_TRIGGER_HAPPY19		0x2d2</span>
<span class="cp">#define BTN_TRIGGER_HAPPY20		0x2d3</span>
<span class="cp">#define BTN_TRIGGER_HAPPY21		0x2d4</span>
<span class="cp">#define BTN_TRIGGER_HAPPY22		0x2d5</span>
<span class="cp">#define BTN_TRIGGER_HAPPY23		0x2d6</span>
<span class="cp">#define BTN_TRIGGER_HAPPY24		0x2d7</span>
<span class="cp">#define BTN_TRIGGER_HAPPY25		0x2d8</span>
<span class="cp">#define BTN_TRIGGER_HAPPY26		0x2d9</span>
<span class="cp">#define BTN_TRIGGER_HAPPY27		0x2da</span>
<span class="cp">#define BTN_TRIGGER_HAPPY28		0x2db</span>
<span class="cp">#define BTN_TRIGGER_HAPPY29		0x2dc</span>
<span class="cp">#define BTN_TRIGGER_HAPPY30		0x2dd</span>
<span class="cp">#define BTN_TRIGGER_HAPPY31		0x2de</span>
<span class="cp">#define BTN_TRIGGER_HAPPY32		0x2df</span>
<span class="cp">#define BTN_TRIGGER_HAPPY33		0x2e0</span>
<span class="cp">#define BTN_TRIGGER_HAPPY34		0x2e1</span>
<span class="cp">#define BTN_TRIGGER_HAPPY35		0x2e2</span>
<span class="cp">#define BTN_TRIGGER_HAPPY36		0x2e3</span>
<span class="cp">#define BTN_TRIGGER_HAPPY37		0x2e4</span>
<span class="cp">#define BTN_TRIGGER_HAPPY38		0x2e5</span>
<span class="cp">#define BTN_TRIGGER_HAPPY39		0x2e6</span>
<span class="cp">#define BTN_TRIGGER_HAPPY40		0x2e7</span>

<span class="cm">/* We avoid low common keys in module aliases so they don&#39;t get huge. */</span>
<span class="cp">#define KEY_MIN_INTERESTING	KEY_MUTE</span>
<span class="cp">#define KEY_MAX			0x2ff</span>
<span class="cp">#define KEY_CNT			(KEY_MAX+1)</span>

<span class="cm">/*</span>
<span class="cm"> * Relative axes</span>
<span class="cm"> */</span>

<span class="cp">#define REL_X			0x00</span>
<span class="cp">#define REL_Y			0x01</span>
<span class="cp">#define REL_Z			0x02</span>
<span class="cp">#define REL_RX			0x03</span>
<span class="cp">#define REL_RY			0x04</span>
<span class="cp">#define REL_RZ			0x05</span>
<span class="cp">#define REL_HWHEEL		0x06</span>
<span class="cp">#define REL_DIAL		0x07</span>
<span class="cp">#define REL_WHEEL		0x08</span>
<span class="cp">#define REL_MISC		0x09</span>
<span class="cm">/*</span>
<span class="cm"> * 0x0a is reserved and should not be used in input drivers.</span>
<span class="cm"> * It was used by HID as REL_MISC+1 and userspace needs to detect if</span>
<span class="cm"> * the next REL_* event is correct or is just REL_MISC + n.</span>
<span class="cm"> * We define here REL_RESERVED so userspace can rely on it and detect</span>
<span class="cm"> * the situation described above.</span>
<span class="cm"> */</span>
<span class="cp">#define REL_RESERVED		0x0a</span>
<span class="cp">#define REL_WHEEL_HI_RES	0x0b</span>
<span class="cp">#define REL_HWHEEL_HI_RES	0x0c</span>
<span class="cp">#define REL_MAX			0x0f</span>
<span class="cp">#define REL_CNT			(REL_MAX+1)</span>

<span class="cm">/*</span>
<span class="cm"> * Absolute axes</span>
<span class="cm"> */</span>

<span class="cp">#define ABS_X			0x00</span>
<span class="cp">#define ABS_Y			0x01</span>
<span class="cp">#define ABS_Z			0x02</span>
<span class="cp">#define ABS_RX			0x03</span>
<span class="cp">#define ABS_RY			0x04</span>
<span class="cp">#define ABS_RZ			0x05</span>
<span class="cp">#define ABS_THROTTLE		0x06</span>
<span class="cp">#define ABS_RUDDER		0x07</span>
<span class="cp">#define ABS_WHEEL		0x08</span>
<span class="cp">#define ABS_GAS			0x09</span>
<span class="cp">#define ABS_BRAKE		0x0a</span>
<span class="cp">#define ABS_HAT0X		0x10</span>
<span class="cp">#define ABS_HAT0Y		0x11</span>
<span class="cp">#define ABS_HAT1X		0x12</span>
<span class="cp">#define ABS_HAT1Y		0x13</span>
<span class="cp">#define ABS_HAT2X		0x14</span>
<span class="cp">#define ABS_HAT2Y		0x15</span>
<span class="cp">#define ABS_HAT3X		0x16</span>
<span class="cp">#define ABS_HAT3Y		0x17</span>
<span class="cp">#define ABS_PRESSURE		0x18</span>
<span class="cp">#define ABS_DISTANCE		0x19</span>
<span class="cp">#define ABS_TILT_X		0x1a</span>
<span class="cp">#define ABS_TILT_Y		0x1b</span>
<span class="cp">#define ABS_TOOL_WIDTH		0x1c</span>

<span class="cp">#define ABS_VOLUME		0x20</span>

<span class="cp">#define ABS_MISC		0x28</span>

<span class="cm">/*</span>
<span class="cm"> * 0x2e is reserved and should not be used in input drivers.</span>
<span class="cm"> * It was used by HID as ABS_MISC+6 and userspace needs to detect if</span>
<span class="cm"> * the next ABS_* event is correct or is just ABS_MISC + n.</span>
<span class="cm"> * We define here ABS_RESERVED so userspace can rely on it and detect</span>
<span class="cm"> * the situation described above.</span>
<span class="cm"> */</span>
<span class="cp">#define ABS_RESERVED		0x2e</span>

<span class="cp">#define ABS_MT_SLOT		0x2f	</span><span class="cm">/* MT slot being modified */</span><span class="cp"></span>
<span class="cp">#define ABS_MT_TOUCH_MAJOR	0x30	</span><span class="cm">/* Major axis of touching ellipse */</span><span class="cp"></span>
<span class="cp">#define ABS_MT_TOUCH_MINOR	0x31	</span><span class="cm">/* Minor axis (omit if circular) */</span><span class="cp"></span>
<span class="cp">#define ABS_MT_WIDTH_MAJOR	0x32	</span><span class="cm">/* Major axis of approaching ellipse */</span><span class="cp"></span>
<span class="cp">#define ABS_MT_WIDTH_MINOR	0x33	</span><span class="cm">/* Minor axis (omit if circular) */</span><span class="cp"></span>
<span class="cp">#define ABS_MT_ORIENTATION	0x34	</span><span class="cm">/* Ellipse orientation */</span><span class="cp"></span>
<span class="cp">#define ABS_MT_POSITION_X	0x35	</span><span class="cm">/* Center X touch position */</span><span class="cp"></span>
<span class="cp">#define ABS_MT_POSITION_Y	0x36	</span><span class="cm">/* Center Y touch position */</span><span class="cp"></span>
<span class="cp">#define ABS_MT_TOOL_TYPE	0x37	</span><span class="cm">/* Type of touching device */</span><span class="cp"></span>
<span class="cp">#define ABS_MT_BLOB_ID		0x38	</span><span class="cm">/* Group a set of packets as a blob */</span><span class="cp"></span>
<span class="cp">#define ABS_MT_TRACKING_ID	0x39	</span><span class="cm">/* Unique ID of initiated contact */</span><span class="cp"></span>
<span class="cp">#define ABS_MT_PRESSURE		0x3a	</span><span class="cm">/* Pressure on contact area */</span><span class="cp"></span>
<span class="cp">#define ABS_MT_DISTANCE		0x3b	</span><span class="cm">/* Contact hover distance */</span><span class="cp"></span>
<span class="cp">#define ABS_MT_TOOL_X		0x3c	</span><span class="cm">/* Center X tool position */</span><span class="cp"></span>
<span class="cp">#define ABS_MT_TOOL_Y		0x3d	</span><span class="cm">/* Center Y tool position */</span><span class="cp"></span>


<span class="cp">#define ABS_MAX			0x3f</span>
<span class="cp">#define ABS_CNT			(ABS_MAX+1)</span>

<span class="cm">/*</span>
<span class="cm"> * Switch events</span>
<span class="cm"> */</span>

<span class="cp">#define SW_LID			0x00  </span><span class="cm">/* set = lid shut */</span><span class="cp"></span>
<span class="cp">#define SW_TABLET_MODE		0x01  </span><span class="cm">/* set = tablet mode */</span><span class="cp"></span>
<span class="cp">#define SW_HEADPHONE_INSERT	0x02  </span><span class="cm">/* set = inserted */</span><span class="cp"></span>
<span class="cp">#define SW_RFKILL_ALL		0x03  </span><span class="cm">/* rfkill master switch, type &quot;any&quot;</span>
<span class="cm">					 set = radio enabled */</span><span class="cp"></span>
<span class="cp">#define SW_RADIO		SW_RFKILL_ALL	</span><span class="cm">/* deprecated */</span><span class="cp"></span>
<span class="cp">#define SW_MICROPHONE_INSERT	0x04  </span><span class="cm">/* set = inserted */</span><span class="cp"></span>
<span class="cp">#define SW_DOCK			0x05  </span><span class="cm">/* set = plugged into dock */</span><span class="cp"></span>
<span class="cp">#define SW_LINEOUT_INSERT	0x06  </span><span class="cm">/* set = inserted */</span><span class="cp"></span>
<span class="cp">#define SW_JACK_PHYSICAL_INSERT 0x07  </span><span class="cm">/* set = mechanical switch set */</span><span class="cp"></span>
<span class="cp">#define SW_VIDEOOUT_INSERT	0x08  </span><span class="cm">/* set = inserted */</span><span class="cp"></span>
<span class="cp">#define SW_CAMERA_LENS_COVER	0x09  </span><span class="cm">/* set = lens covered */</span><span class="cp"></span>
<span class="cp">#define SW_KEYPAD_SLIDE		0x0a  </span><span class="cm">/* set = keypad slide out */</span><span class="cp"></span>
<span class="cp">#define SW_FRONT_PROXIMITY	0x0b  </span><span class="cm">/* set = front proximity sensor active */</span><span class="cp"></span>
<span class="cp">#define SW_ROTATE_LOCK		0x0c  </span><span class="cm">/* set = rotate locked/disabled */</span><span class="cp"></span>
<span class="cp">#define SW_LINEIN_INSERT	0x0d  </span><span class="cm">/* set = inserted */</span><span class="cp"></span>
<span class="cp">#define SW_MUTE_DEVICE		0x0e  </span><span class="cm">/* set = device disabled */</span><span class="cp"></span>
<span class="cp">#define SW_PEN_INSERTED		0x0f  </span><span class="cm">/* set = pen inserted */</span><span class="cp"></span>
<span class="cp">#define SW_MACHINE_COVER	0x10  </span><span class="cm">/* set = cover closed */</span><span class="cp"></span>
<span class="cp">#define SW_MAX			0x10</span>
<span class="cp">#define SW_CNT			(SW_MAX+1)</span>

<span class="cm">/*</span>
<span class="cm"> * Misc events</span>
<span class="cm"> */</span>

<span class="cp">#define MSC_SERIAL		0x00</span>
<span class="cp">#define MSC_PULSELED		0x01</span>
<span class="cp">#define MSC_GESTURE		0x02</span>
<span class="cp">#define MSC_RAW			0x03</span>
<span class="cp">#define MSC_SCAN		0x04</span>
<span class="cp">#define MSC_TIMESTAMP		0x05</span>
<span class="cp">#define MSC_MAX			0x07</span>
<span class="cp">#define MSC_CNT			(MSC_MAX+1)</span>

<span class="cm">/*</span>
<span class="cm"> * LEDs</span>
<span class="cm"> */</span>

<span class="cp">#define LED_NUML		0x00</span>
<span class="cp">#define LED_CAPSL		0x01</span>
<span class="cp">#define LED_SCROLLL		0x02</span>
<span class="cp">#define LED_COMPOSE		0x03</span>
<span class="cp">#define LED_KANA		0x04</span>
<span class="cp">#define LED_SLEEP		0x05</span>
<span class="cp">#define LED_SUSPEND		0x06</span>
<span class="cp">#define LED_MUTE		0x07</span>
<span class="cp">#define LED_MISC		0x08</span>
<span class="cp">#define LED_MAIL		0x09</span>
<span class="cp">#define LED_CHARGING		0x0a</span>
<span class="cp">#define LED_MAX			0x0f</span>
<span class="cp">#define LED_CNT			(LED_MAX+1)</span>

<span class="cm">/*</span>
<span class="cm"> * Autorepeat values</span>
<span class="cm"> */</span>

<span class="cp">#define REP_DELAY		0x00</span>
<span class="cp">#define REP_PERIOD		0x01</span>
<span class="cp">#define REP_MAX			0x01</span>
<span class="cp">#define REP_CNT			(REP_MAX+1)</span>

<span class="cm">/*</span>
<span class="cm"> * Sounds</span>
<span class="cm"> */</span>

<span class="cp">#define SND_CLICK		0x00</span>
<span class="cp">#define SND_BELL		0x01</span>
<span class="cp">#define SND_TONE		0x02</span>
<span class="cp">#define SND_MAX			0x07</span>
<span class="cp">#define SND_CNT			(SND_MAX+1)</span>

<span class="cp">#endif</span>
</pre></div>
</code></pre></td></tr></table>
</div> <!-- class=content -->
<div class='footer'>generated by <a href='https://git.zx2c4.com/cgit/about/'>cgit 1.2.3-1.el7</a> (<a href='https://git-scm.com/'>git 2.26.2</a>) at 2021-06-13 23:44:38 +0000</div>
</div> <!-- id=cgit -->
</body>
</html>
