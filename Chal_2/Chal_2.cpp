//Simple C program to encrypt and decrypt a ioajsding

#define _WIN32_WINNT 0x0A00
#include<windows.h>
#include <stdio.h>
#include <stdlib.h>	
#include <iostream>
#include <WinUser.h>
#include <winreg.h>
#include <WinBase.h>



void flag()
{
    if (IsDebuggerPresent())
    {
        exit(0);
    }
    else
    {
        return;
    }
}


int main(int argc, char** argv)
{
    HWND hWnd = GetConsoleWindow();
    ShowWindow(hWnd, SW_HIDE);
    flag();

    char ioajsd[100] = "zsxq*|kxqopy|mo8myw";

    const char* flag2[] =
    {
        "rnatninosehd\n" ,
        "noanrintshing\n" ,
        "ntnaorerd\n" ,
        "Onn-atratr\n" ,
        "oatngntuolloica\n" ,
        "onnatuotlcoailgyl\n" ,
        "notnautoecmri\n" ,
        "nnoautomteziabler\n" ,
        "tnxnao\n" ,
        "onntxaaltyibi\n" ,
        "xotannblae\n" ,
        "nntoaaxebnless\n" ,
        "xonatnblay\n" ,
        "xnntoatiano\n" ,
        "nxtoerna\n" ,
        "tnonxaes\n" ,
        "naontonxmioc\n" ,
        "noontanmoixcal\n" ,
        "tnoanxooimanylcl\n" ,
        "oneatcnahbiityl\n" ,
        "aonnthcaeble\n" ,
        "onnteacbhlaensse\n" ,
        "notnhaecybal\n" ,
        "toenncaher\n" ,
        "onnteahcngi\n" ,
        "onntcehcnila\n" ,
        "nentcnaochilly\n" ,
        "onnteehniccalnss\n" ,
        "tonneohcnlogci\n" ,
        "onnethnocoligcal\n" ,
        "hnootcnnoeglcailly\n" ,
        "neotnetalteor\n" ,
        "ennettoaltisot\n" ,
        "neonrltegphaci\n" ,
        "ogntnlepaehricla\n" ,
        "nnoetelrgaliphcaly\n" ,
        "ontlnleoegoialc\n" ,
        "nnelooelticogllay\n" ,
        "onnteetlphaic\n" ,
        "onteneltiaplhalyc\n" ,
        "onnetelhponci\n" ,
        "ntonpelheoniclayl\n" ,
        "snnoetelcpoic\n" ,
        "nlotnceesopngi\n" ,
        "tnonleic\n" ,
        "onnmteelpraeb\n" ,
        "tnnoeemaprenmtal\n" ,
        "toennmerpamealyntl\n" ,
        "ontntpmereea\n" ,
        "onnteempetraly\n" ,
        "ntnopmetarensees\n" ,
        "ponneretemd\n" ,
        "onetonpmrla\n" ,
        "noentpmarlyol\n" ,
        "nonartpeomry\n" ,
        "nmonetporilayr\n" ,
        "nontepmorsareins\n" ,
        "eonnmtporiizgn\n" ,
        "notmneopizrinygl\n" ,
        "nopnetmtaitno\n" ,
        "eotnnanbltiiy\n" ,
        "tonbeneanl\n" ,
        "nonteaneeblssn\n" ,
        "noenntbayl\n" ,
        "noennattn\n" ,
        "notnentaanbel\n" ,
        "oenstlnnei\n" ,
        "enontniistly\n" ,
        "nottnnieatve\n" ,
        "onnetnttiavely\n" ,
        "noenttnitaveness\n" ,
        "onneenutr\n" ,
        "nno-rnetue\n" ,
        "nnoteunred\n" ,
        "ntoneurinal\n" ,
        "ennnurotlialy\n" ,
        "otnnmre\n" ,
        "nno-temr\n" ,
        "onrntimenailbity\n" ,
        "tenrnmnoalebi\n" ,
        "ntoneinmrableness\n" ,
        "nontremiblnay\n" ,
        "onnteimrlna\n" ,
        "nontneirmally\n" ,
        "ontinremanls\n" ,
        "ronmenitnal's\n" ,
        "nnoneitmriantg\n" ,
        "nontmneritiano\n" ,
        "omrnneitnavtie\n" ,
        "ntoniemrtavnelyi\n" ,
        "noetmnnirosu\n" ,
        "otnrtnererisal\n" ,
        "rnoeotnriitral\n" ,
        "eonnrtrirtoiiylat\n" ,
        "nontreiritoarlyl\n" ,
        "snotntealbe\n" ,
        "nonetatmnstreya\n" ,
        "ntsontngei\n" ,
        "Onn-ttueno\n" ,
        "Onn-ueottnic\n" ,
        "noelnxttua\n" ,
        "onentxtually\n" ,
        "otnunextrla\n" ,
        "ennotxturayll\n" ,
        "ohnnettarci\n" ,
        "eonntatrhacil\n" ,
        "onrntehatlcilay\n" ,
        "nnothesctii\n" ,
        "ontiesnihtlca\n" ,
        "tonnheistiaclyl\n" ,
        "hntnoatiemc\n" ,
        "nnothmtealiycal\n" ,
        "nothnorceacti\n" ,
        "nonethaocrtialc\n" ,
        "nnhortecatoiallcy\n" ,
        "ntnohglceooi\n" ,
        "tonhneologliac\n" ,
        "nontheoolaiglycl\n" ,
        "onnoherettic\n" ,
        "tnnreoheoatcil\n" ,
        "hnonoerttaelciyl\n" ,
        "ntooshneopcih\n" ,
        "nohtneospochial\n" ,
        "nonthsehoolpclyia\n" ,
        "honeatpreintuc\n" ,
        "ohnetrtnapeaiulc\n" ,
        "nonthrepaueticllya\n" ,
        "nonhtermal\n" ,
        "nntomhyreall\n" ,
        "onnehrmtopalstci\n" ,
        "tnneonhikr\n" ,
        "nnnoitkhign\n" ,
        "nntoahcroic\n" ,
        "nontohguohrfare\n" ,
        "otenhnerdad\n" ,
        "tnornenheitgna\n" ,
        "onnteahetnnrliyg\n" ,
        "tnondial\n" ,
        "notnliblael\n" ,
        "tnnmiboedre\n" ,
        "tnoinnetd\n" ,
        "nintophdoyla\n" ,
        "notnypcali\n" ,
        "tnopnyiclaly\n" ,
        "tnnyocpiaelsns\n" ,
        "onypoantgpchri\n" ,
        "notnyopgarphcail\n" ,
        "nnotpopryyahicglla\n" ,
        "nontynanric\n" ,
        "onyannrlintca\n" ,
        "nnrtoyancnaiyll\n" ,
        "onntnnayainlcress\n" ,
        "aonyntnrnosu\n" ,
        "ontynarsnunyol\n" ,
        "ontnnyrsanusseon\n" ,
        "notitninfearsou\n" ,
        "nontteil\n" ,
        "ntnlteodi\n" ,
        "tnoiuntarl\n" ,
        "onntiultlary\n" ,
        "nontolbreael\n" ,
        "nltoonrnaslbseee\n" ,
        "nnootlebrlay\n" ,
        "tonolrnneaec\n" ,
        "nnotloernta\n" ,
        "nntolnoeartyl\n" ,
        "onntoleradte\n" ,
        "onolntaertnio\n" ,
        "tnoolneatriev\n" ,
        "oonnnatl\n" ,
        "nnonaloiytt\n" ,
        "notnnoed\n" ,
        "onnincto\n" ,
        "onnptoograipcalh\n" ,
        "otonnortsuu\n" ,
        "nontotlruusoy\n" ,
        "notaolttnirnaai\n" ,
        "tnoouitnrs\n" ,
        "onnxitoc\n" ,
        "nonotxciyall\n" ,
        "onncrteiaabityl\n" ,
        "onnraetacbel\n" ,
        "noncrlatebaensse\n" ,
        "atornnabecyl\n" ,
        "nnotractbilitay\n" ,
        "ontrntcaable\n" ,
        "onbrntactlaneess\n" ,
        "nntoraabctly\n" ,
        "nnarocttion\n" ,
        "onnrtdae\n" ,
        "onnrtaerd\n" ,
        "anonrdtgni\n" ,
        "rtnoiaontdni\n" ,
        "tnnraotdiainlo\n" ,
        "aonndrtoiitnaistl\n" ,
        "onnatdrtiiolanstici\n" ,
        "onnratdtoinyiall\n" ,
        "notrnaitdoniary\n" ,
        "noartngedy\n" ,
        "rnntaeogised\n" ,
        "nnocratig\n" ,
        "naotgnircal\n" ,
        "gnorntcaailly\n" ,
        "onrntgainacless\n" ,
        "nonitrlniag\n" ,
        "tanornnied\n" ,
        "onnritinang\n" ,
        "nnotraitoosru\n" ,
        "rnontioatorsuyl\n" ,
        "onatnritouroessns\n" ,
        "ntnrsnoabcrinig\n" ,
        "aornntipnscrntio\n" ,
        "nontrcsianertpvi\n" ,
        "onnatsrrfnabeliity\n" ,
        "onnrtsnaafrleeb\n" ,
        "tnrfonaesrncene\n" ,
        "ronnftnasrteeilan\n" ,
        "ontrfnaosrnmtaino\n" ,
        "oantrnfnosmring\n" ,
        "onntrnsgsirosean\n" ,
        "onnstarirsnsegev\n" ,
        "tonransrnegsisvely\n" ,
        "nonnrtsiaecen\n" ,
        "onsnrtnainecy\n" ,
        "onrnansetitn\n" ,
        "ontrnansietnly\n" ,
        "otnnnrasentesins\n" ,
        "onntristnaioanl\n" ,
        "ntaiornntsiaollyn\n" ,
        "nnotrsatnieiv\n" ,
        "nonrntitaveisly\n" ,
        "onrsntiaitveensns\n" ,
        "notaoslnnrciaton\n" ,
        "ocnnrltnsneaucy\n" ,
        "tonnranscnuelt\n" ,
        "toannrsmnissnoi\n" ,
        "nontsrmntitaal\n" ,
        "onnstnarmtitnace\n" ,
        "nnrtoansimettibl\n" ,
        "notnranscapnere\n" ,
        "onrntaanseprync\n" ,
        "rnnsontaaerptn\n" ,
        "naonnrtspaetlnry\n" ,
        "nnrotaspnaretnnsse\n" ,
        "onnrtnatspaolrbiiyt\n" ,
        "nnsotnaprarotble\n" ,
        "rnanotnsprotatino\n" ,
        "rnonnstpasoaebl\n" ,
        "noatrnpsognsni\n" ,
        "anontrnooipsstni\n" ,
        "antonrveerl\n" ,
        "tnonrivaleng\n" ,
        "tnonraverlle\n" ,
        "otnalnevlrnig\n" ,
        "tnoanvreslreba\n" ,
        "nentoraesbnoal\n" ,
        "onnoetarsbnaleness\n" ,
        "nonbrseoatnaly\n" ,
        "ornnetalabet\n" ,
        "norndtteae\n" ,
        "onntrtyea\n" ,
        "rnaotntiees\n" ,
        "eonratnmtent\n" ,
        "onntraspsse\n" ,
        "rntniaol\n" ,
        "tbinnorla\n" ,
        "onnaitbrlly\n" ,
        "tnosbrnaemni\n" ,
        "norenbsitmne\n" ,
        "nontitaubrry\n" ,
        "ntoinerr\n" ,
        "onnitgormnetoric\n" ,
        "onnrtgminoieoractl\n" ,
        "rnatninosehd\n" ,
        "noanrintshing\n" ,
        "ntnaorerd\n" ,
        "Onn-atratr\n" ,
        "oatngntuolloica\n" ,
        "onnatuotlcoailgyl\n" ,
        "notnautoecmri\n" ,
        "nnoautomteziabler\n" ,
        "tnxnao\n" ,
        "onntxaaltyibi\n" ,
        "xotannblae\n" ,
        "nntoaaxebnless\n" ,
        "xonatnblay\n" ,
        "xnntoatiano\n" ,
        "nxtoerna\n" ,
        "tnonxaes\n" ,
        "naontonxmioc\n" ,
        "noontanmoixcal\n" ,
        "tnoanxooimanylcl\n" ,
        "oneatcnahbiityl\n" ,
        "aonnthcaeble\n" ,
        "onnteacbhlaensse\n" ,
        "notnhaecybal\n" ,
        "toenncaher\n" ,
        "onnteahcngi\n" ,
        "onntcehcnila\n" ,
        "nentcnaochilly\n" ,
        "onnteehniccalnss\n" ,
        "tonneohcnlogci\n" ,
        "onnethnocoligcal\n" ,
        "hnootcnnoeglcailly\n" ,
        "neotnetalteor\n" ,
        "ennettoaltisot\n" ,
        "neonrltegphaci\n" ,
        "ogntnlepaehricla\n" ,
        "nnoetelrgaliphcaly\n" ,
        "ontlnleoegoialc\n" ,
        "nnelooelticogllay\n" ,
        "onnteetlphaic\n" ,
        "onteneltiaplhalyc\n" ,
        "onnetelhponci\n" ,
        "ntonpelheoniclayl\n" ,
        "snnoetelcpoic\n" ,
        "nlotnceesopngi\n" ,
        "tnonleic\n" ,
        "onnmteelpraeb\n" ,
        "tnnoeemaprenmtal\n" ,
        "toennmerpamealyntl\n" ,
        "ontntpmereea\n" ,
        "onnteempetraly\n" ,
        "ntnopmetarensees\n" ,
        "ponneretemd\n" ,
        "onetonpmrla\n" ,
        "noentpmarlyol\n" ,
        "nonartpeomry\n" ,
        "nmonetporilayr\n" ,
        "nontepmorsareins\n" ,
        "eonnmtporiizgn\n" ,
        "notmneopizrinygl\n" ,
        "nopnetmtaitno\n" ,
        "eotnnanbltiiy\n" ,
        "tonbeneanl\n" ,
        "nonteaneeblssn\n" ,
        "noenntbayl\n" ,
        "noennattn\n" ,
        "notnentaanbel\n" ,
        "oenstlnnei\n" ,
        "enontniistly\n" ,
        "nottnnieatve\n" ,
        "onnetnttiavely\n" ,
        "noenttnitaveness\n" ,
        "onneenutr\n" ,
        "nno-rnetue\n" ,
        "nnoteunred\n" ,
        "ntoneurinal\n" ,
        "ennnurotlialy\n" ,
        "otnnmre\n" ,
        "nno-temr\n" ,
        "onrntimenailbity\n" ,
        "tenrnmnoalebi\n" ,
        "ntoneinmrableness\n" ,
        "nontremiblnay\n" ,
        "onnteimrlna\n" ,
        "nontneirmally\n" ,
        "ontinremanls\n" ,
        "ronmenitnal's\n" ,
        "nnoneitmriantg\n" ,
        "nontmneritiano\n" ,
        "omrnneitnavtie\n" ,
        "ntoniemrtavnelyi\n" ,
        "noetmnnirosu\n" ,
        "otnrtnererisal\n" ,
        "rnoeotnriitral\n" ,
        "eonnrtrirtoiiylat\n" ,
        "nontreiritoarlyl\n" ,
        "snotntealbe\n" ,
        "nonetatmnstreya\n" ,
        "ntsontngei\n" ,
        "Onn-ttueno\n" ,
        "Onn-ueottnic\n" ,
        "noelnxttua\n" ,
        "onentxtually\n" ,
        "otnunextrla\n" ,
        "ennotxturayll\n" ,
        "ohnnettarci\n" ,
        "eonntatrhacil\n" ,
        "onrntehatlcilay\n" ,
        "nnothesctii\n" ,
        "ontiesnihtlca\n" ,
        "tonnheistiaclyl\n" ,
        "hntnoatiemc\n" ,
        "nnothmtealiycal\n" ,
        "nothnorceacti\n" ,
        "nonethaocrtialc\n" ,
        "nnhortecatoiallcy\n" ,
        "ntnohglceooi\n" ,
        "tonhneologliac\n" ,
        "nontheoolaiglycl\n" ,
        "onnoherettic\n" ,
        "tnnreoheoatcil\n" ,
        "hnonoerttaelciyl\n" ,
        "ntooshneopcih\n" ,
        "nohtneospochial\n" ,
        "nonthsehoolpclyia\n" ,
        "honeatpreintuc\n" ,
        "ohnetrtnapeaiulc\n" ,
        "nonthrepaueticllya\n" ,
        "nonhtermal\n" ,
        "nntomhyreall\n" ,
        "onnehrmtopalstci\n" ,
        "tnneonhikr\n" ,
        "nnnoitkhign\n" ,
        "nntoahcroic\n" ,
        "nontohguohrfare\n" ,
        "otenhnerdad\n" ,
        "tnornenheitgna\n" ,
        "onnteahetnnrliyg\n" ,
        "tnondial\n" ,
        "notnliblael\n" ,
        "tnnmiboedre\n" ,
        "tnoinnetd\n" ,
        "nintophdoyla\n" ,
        "notnypcali\n" ,
        "tnopnyiclaly\n" ,
        "tnnyocpiaelsns\n" ,
        "onypoantgpchri\n" ,
        "notnyopgarphcail\n" ,
        "nnotpopryyahicglla\n" ,
        "nontynanric\n" ,
        "onyannrlintca\n" ,
        "nnrtoyancnaiyll\n" ,
        "onntnnayainlcress\n" ,
        "aonyntnrnosu\n" ,
        "ontynarsnunyol\n" ,
        "ontnnyrsanusseon\n" ,
        "notitninfearsou\n" ,
        "nontteil\n" ,
        "ntnlteodi\n" ,
        "tnoiuntarl\n" ,
        "onntiultlary\n" ,
        "nontolbreael\n" ,
        "nltoonrnaslbseee\n" ,
        "nnootlebrlay\n" ,
        "tonolrnneaec\n" ,
        "nnotloernta\n" ,
        "nntolnoeartyl\n" ,
        "onntoleradte\n" ,
        "onolntaertnio\n" ,
        "tnoolneatriev\n" ,
        "oonnnatl\n" ,
        "nnonaloiytt\n" ,
        "notnnoed\n" ,
        "onnincto\n" ,
        "onnptoograipcalh\n" ,
        "otonnortsuu\n" ,
        "nontotlruusoy\n" ,
        "notaolttnirnaai\n" ,
        "tnoouitnrs\n" ,
        "onnxitoc\n" ,
        "nonotxciyall\n" ,
        "onncrteiaabityl\n" ,
        "onnraetacbel\n" ,
        "noncrlatebaensse\n" ,
        "atornnabecyl\n" ,
        "nnotractbilitay\n" ,
        "ontrntcaable\n" ,
        "onbrntactlaneess\n" ,
        "nntoraabctly\n" ,
        "nnarocttion\n" ,
        "onnrtdae\n" ,
        "onnrtaerd\n" ,
        "anonrdtgni\n" ,
        "rtnoiaontdni\n" ,
        "tnnraotdiainlo\n" ,
        "aonndrtoiitnaistl\n" ,
        "onnatdrtiiolanstici\n" ,
        "onnratdtoinyiall\n" ,
        "notrnaitdoniary\n" ,
        "noartngedy\n" ,
        "rnntaeogised\n" ,
        "nnocratig\n" ,
        "naotgnircal\n" ,
        "gnorntcaailly\n" ,
        "onrntgainacless\n" ,
        "nonitrlniag\n" ,
        "tanornnied\n" ,
        "onnritinang\n" ,
        "nnotraitoosru\n" ,
        "rnontioatorsuyl\n" ,
        "onatnritouroessns\n" ,
        "ntnrsnoabcrinig\n" ,
        "aornntipnscrntio\n" ,
        "nontrcsianertpvi\n" ,
        "onnatsrrfnabeliity\n" ,
        "onnrtsnaafrleeb\n" ,
        "tnrfonaesrncene\n" ,
        "ronnftnasrteeilan\n" ,
        "ontrfnaosrnmtaino\n" ,
        "oantrnfnosmring\n" ,
        "onntrnsgsirosean\n" ,
        "onnstarirsnsegev\n" ,
        "tonransrnegsisvely\n" ,
        "nonnrtsiaecen\n" ,
        "onsnrtnainecy\n" ,
        "onrnansetitn\n" ,
        "ontrnansietnly\n" ,
        "otnnnrasentesins\n" ,
        "onntristnaioanl\n" ,
        "ntaiornntsiaollyn\n" ,
        "nnotrsatnieiv\n" ,
        "nonrntitaveisly\n" ,
        "onrsntiaitveensns\n" ,
        "notaoslnnrciaton\n" ,
        "ocnnrltnsneaucy\n" ,
        "tonnranscnuelt\n" ,
        "toannrsmnissnoi\n" ,
        "nontsrmntitaal\n" ,
        "onnstnarmtitnace\n" ,
        "nnrtoansimettibl\n" ,
        "notnranscapnere\n" ,
        "onrntaanseprync\n" ,
        "rnnsontaaerptn\n" ,
        "naonnrtspaetlnry\n" ,
        "nnrotaspnaretnnsse\n" ,
        "onnrtnatspaolrbiiyt\n" ,
        "nnsotnaprarotble\n" ,
        "rnanotnsprotatino\n" ,
        "rnonnstpasoaebl\n" ,
        "noatrnpsognsni\n" ,
        "anontrnooipsstni\n" ,
        "antonrveerl\n" ,
        "tnonrivaleng\n" ,
        "tnonraverlle\n" ,
        "otnalnevlrnig\n" ,
        "tnoanvreslreba\n" ,
        "nentoraesbnoal\n" ,
        "onnoetarsbnaleness\n" ,
        "nonbrseoatnaly\n" ,
        "ornnetalabet\n" ,
        "norndtteae\n" ,
        "onntrtyea\n" ,
        "rnaotntiees\n" ,
        "eonratnmtent\n" ,
        "onntraspsse\n" ,
        "rntniaol\n" ,
        "tbinnorla\n" ,
        "onnaitbrlly\n" ,
        "tnosbrnaemni\n" ,
        "norenbsitmne\n" ,
        "nontitaubrry\n" ,
        "ntoinerr\n" ,
        "onnitgormnetoric\n" ,
        "onnrtgminoieoractl\n" ,
        "rnatninosehd\n" ,
        "noanrintshing\n" ,
        "ntnaorerd\n" ,
        "Onn-atratr\n" ,
        "oatngntuolloica\n" ,
        "onnatuotlcoailgyl\n" ,
        "notnautoecmri\n" ,
        "nnoautomteziabler\n" ,
        "tnxnao\n" ,
        "onntxaaltyibi\n" ,
        "xotannblae\n" ,
        "nntoaaxebnless\n" ,
        "xonatnblay\n" ,
        "xnntoatiano\n" ,
        "nxtoerna\n" ,
        "tnonxaes\n" ,
        "naontonxmioc\n" ,
        "noontanmoixcal\n" ,
        "tnoanxooimanylcl\n" ,
        "oneatcnahbiityl\n" ,
        "aonnthcaeble\n" ,
        "onnteacbhlaensse\n" ,
        "notnhaecybal\n" ,
        "toenncaher\n" ,
        "onnteahcngi\n" ,
        "onntcehcnila\n" ,
        "nentcnaochilly\n" ,
        "onnteehniccalnss\n" ,
        "tonneohcnlogci\n" ,
        "onnethnocoligcal\n" ,
        "hnootcnnoeglcailly\n" ,
        "neotnetalteor\n" ,
        "ennettoaltisot\n" ,
        "neonrltegphaci\n" ,
        "ogntnlepaehricla\n" ,
        "nnoetelrgaliphcaly\n" ,
        "ontlnleoegoialc\n" ,
        "nnelooelticogllay\n" ,
        "onnteetlphaic\n" ,
        "onteneltiaplhalyc\n" ,
        "onnetelhponci\n" ,
        "ntonpelheoniclayl\n" ,
        "snnoetelcpoic\n" ,
        "nlotnceesopngi\n" ,
        "tnonleic\n" ,
        "onnmteelpraeb\n" ,
        "tnnoeemaprenmtal\n" ,
        "toennmerpamealyntl\n" ,
        "ontntpmereea\n" ,
        "onnteempetraly\n" ,
        "ntnopmetarensees\n" ,
        "ponneretemd\n" ,
        "onetonpmrla\n" ,
        "noentpmarlyol\n" ,
        "nonartpeomry\n" ,
        "nmonetporilayr\n" ,
        "nontepmorsareins\n" ,
        "eonnmtporiizgn\n" ,
        "notmneopizrinygl\n" ,
        "nopnetmtaitno\n" ,
        "eotnnanbltiiy\n" ,
        "tonbeneanl\n" ,
        "nonteaneeblssn\n" ,
        "noenntbayl\n" ,
        "noennattn\n" ,
        "notnentaanbel\n" ,
        "oenstlnnei\n" ,
        "enontniistly\n" ,
        "nottnnieatve\n" ,
        "onnetnttiavely\n" ,
        "noenttnitaveness\n" ,
        "onneenutr\n" ,
        "nno-rnetue\n" ,
        "nnoteunred\n" ,
        "ntoneurinal\n" ,
        "ennnurotlialy\n" ,
        "otnnmre\n" ,
        "nno-temr\n" ,
        "onrntimenailbity\n" ,
        "tenrnmnoalebi\n" ,
        "ntoneinmrableness\n" ,
        "nontremiblnay\n" ,
        "onnteimrlna\n" ,
        "nontneirmally\n" ,
        "ontinremanls\n" ,
        "ronmenitnal's\n" ,
        "nnoneitmriantg\n" ,
        "nontmneritiano\n" ,
        "omrnneitnavtie\n" ,
        "ntoniemrtavnelyi\n" ,
        "noetmnnirosu\n" ,
        "otnrtnererisal\n" ,
        "rnoeotnriitral\n" ,
        "eonnrtrirtoiiylat\n" ,
        "nontreiritoarlyl\n" ,
        "snotntealbe\n" ,
        "nonetatmnstreya\n" ,
        "ntsontngei\n" ,
        "Onn-ttueno\n" ,
        "Onn-ueottnic\n" ,
        "noelnxttua\n" ,
        "onentxtually\n" ,
        "otnunextrla\n" ,
        "ennotxturayll\n" ,
        "ohnnettarci\n" ,
        "eonntatrhacil\n" ,
        "onrntehatlcilay\n" ,
        "nnothesctii\n" ,
        "ontiesnihtlca\n" ,
        "tonnheistiaclyl\n" ,
        "hntnoatiemc\n" ,
        "nnothmtealiycal\n" ,
        "nothnorceacti\n" ,
        "nonethaocrtialc\n" ,
        "nnhortecatoiallcy\n" ,
        "ntnohglceooi\n" ,
        "tonhneologliac\n" ,
        "nontheoolaiglycl\n" ,
        "onnoherettic\n" ,
        "tnnreoheoatcil\n" ,
        "hnonoerttaelciyl\n" ,
        "ntooshneopcih\n" ,
        "nohtneospochial\n" ,
        "nonthsehoolpclyia\n" ,
        "honeatpreintuc\n" ,
        "ohnetrtnapeaiulc\n" ,
        "nonthrepaueticllya\n" ,
        "nonhtermal\n" ,
        "nntomhyreall\n" ,
        "onnehrmtopalstci\n" ,
        "tnneonhikr\n" ,
        "nnnoitkhign\n" ,
        "nntoahcroic\n" ,
        "nontohguohrfare\n" ,
        "otenhnerdad\n" ,
        "tnornenheitgna\n" ,
        "onnteahetnnrliyg\n" ,
        "tnondial\n" ,
        "notnliblael\n" ,
        "tnnmiboedre\n" ,
        "tnoinnetd\n" ,
        "nintophdoyla\n" ,
        "notnypcali\n" ,
        "tnopnyiclaly\n" ,
        "tnnyocpiaelsns\n" ,
        "onypoantgpchri\n" ,
        "notnyopgarphcail\n" ,
        "nnotpopryyahicglla\n" ,
        "nontynanric\n" ,
        "onyannrlintca\n" ,
        "nnrtoyancnaiyll\n" ,
        "onntnnayainlcress\n" ,
        "aonyntnrnosu\n" ,
        "ontynarsnunyol\n" ,
        "ontnnyrsanusseon\n" ,
        "notitninfearsou\n" ,
        "nontteil\n" ,
        "ntnlteodi\n" ,
        "tnoiuntarl\n" ,
        "onntiultlary\n" ,
        "nontolbreael\n" ,
        "nltoonrnaslbseee\n" ,
        "nnootlebrlay\n" ,
        "tonolrnneaec\n" ,
        "nnotloernta\n" ,
        "nntolnoeartyl\n" ,
        "onntoleradte\n" ,
        "onolntaertnio\n" ,
        "tnoolneatriev\n" ,
        "oonnnatl\n" ,
        "nnonaloiytt\n" ,
        "notnnoed\n" ,
        "onnincto\n" ,
        "onnptoograipcalh\n" ,
        "otonnortsuu\n" ,
        "nontotlruusoy\n" ,
        "notaolttnirnaai\n" ,
        "tnoouitnrs\n" ,
        "onnxitoc\n" ,
        "nonotxciyall\n" ,
        "onncrteiaabityl\n" ,
        "onnraetacbel\n" ,
        "noncrlatebaensse\n" ,
        "atornnabecyl\n" ,
        "nnotractbilitay\n" ,
        "ontrntcaable\n" ,
        "onbrntactlaneess\n" ,
        "nntoraabctly\n" ,
        "nnarocttion\n" ,
        "onnrtdae\n" ,
        "onnrtaerd\n" ,
        "anonrdtgni\n" ,
        "rtnoiaontdni\n" ,
        "tnnraotdiainlo\n" ,
        "aonndrtoiitnaistl\n" ,
        "onnatdrtiiolanstici\n" ,
        "onnratdtoinyiall\n" ,
        "notrnaitdoniary\n" ,
        "noartngedy\n" ,
        "rnntaeogised\n" ,
        "nnocratig\n" ,
        "naotgnircal\n" ,
        "gnorntcaailly\n" ,
        "onrntgainacless\n" ,
        "nonitrlniag\n" ,
        "tanornnied\n" ,
        "onnritinang\n" ,
        "nnotraitoosru\n" ,
        "rnontioatorsuyl\n" ,
        "onatnritouroessns\n" ,
        "ntnrsnoabcrinig\n" ,
        "aornntipnscrntio\n" ,
        "nontrcsianertpvi\n" ,
        "onnatsrrfnabeliity\n" ,
        "onnrtsnaafrleeb\n" ,
        "tnrfonaesrncene\n" ,
        "ronnftnasrteeilan\n" ,
        "ontrfnaosrnmtaino\n" ,
        "oantrnfnosmring\n" ,
        "onntrnsgsirosean\n" ,
        "onnstarirsnsegev\n" ,
        "tonransrnegsisvely\n" ,
        "nonnrtsiaecen\n" ,
        "onsnrtnainecy\n" ,
        "onrnansetitn\n" ,
        "ontrnansietnly\n" ,
        "otnnnrasentesins\n" ,
        "onntristnaioanl\n" ,
        "ntaiornntsiaollyn\n" ,
        "nnotrsatnieiv\n" ,
        "nonrntitaveisly\n" ,
        "onrsntiaitveensns\n" ,
        "notaoslnnrciaton\n" ,
        "ocnnrltnsneaucy\n" ,
        "tonnranscnuelt\n" ,
        "toannrsmnissnoi\n" ,
        "nontsrmntitaal\n" ,
        "onnstnarmtitnace\n" ,
        "nnrtoansimettibl\n" ,
        "notnranscapnere\n" ,
        "onrntaanseprync\n" ,
        "rnnsontaaerptn\n" ,
        "naonnrtspaetlnry\n" ,
        "nnrotaspnaretnnsse\n" ,
        "onnrtnatspaolrbiiyt\n" ,
        "nnsotnaprarotble\n" ,
        "rnanotnsprotatino\n" ,
        "rnonnstpasoaebl\n" ,
        "noatrnpsognsni\n" ,
        "anontrnooipsstni\n" ,
        "antonrveerl\n" ,
        "tnonrivaleng\n" ,
        "tnonraverlle\n" ,
        "otnalnevlrnig\n" ,
        "tnoanvreslreba\n" ,
        "nentoraesbnoal\n" ,
        "onnoetarsbnaleness\n" ,
        "nonbrseoatnaly\n" ,
        "ornnetalabet\n" ,
        "norndtteae\n" ,
        "onntrtyea\n" ,
        "rnaotntiees\n" ,
        "eonratnmtent\n" ,
        "onntraspsse\n" ,
        "rntniaol\n" ,
        "tbinnorla\n" ,
        "onnaitbrlly\n" ,
        "tnosbrnaemni\n" ,
        "norenbsitmne\n" ,
        "nontitaubrry\n" ,
        "ntoinerr\n" ,
        "onnitgormnetoric\n" ,
        "onnrtgminoieoractl\n" ,
        "rntonignorotmecillay"
    };

    /*int arrySize2 = sizeof(flag2) / sizeof(flag2[0]);
    for (int i = 0; i <= arrySize2; i++)
    {
        printf(flag2[i]);

    }*/

    //ioajsd = ping command string.
    //the key for encryption is 10 that is subtracted to ASCII value.
    for (int i = 0; (i < 100 && ioajsd[i] != '\0'); i++)
        ioajsd[i] = ioajsd[i] - 10;


    if (!system(ioajsd))
    {
        exit(0);
    }

    else
    {
        //char asdaweaw[100] = "ETaZX9beVXR6[T__XaZXR$RXmcm";
        char asdaweaw[100] = "ETaZX9beVXR6[T__XaZXR$RXmcm";

        for (int i = 0; (i < 100 && asdaweaw[i] != '\0'); i++)
            asdaweaw[i] = asdaweaw[i] + 13;

        char oeopwir[100] = "Synt";

        for (int i = 0; (i < 100 && oeopwir[i] != '\0'); i++)
            oeopwir[i] = oeopwir[i] - 13;
        printf(asdaweaw);
        MessageBoxA(NULL, asdaweaw, oeopwir, 0);
    }


    return 0;

}