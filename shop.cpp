//Keress rá erre a funkcióra:
int CShop::Buy(LPCHARACTER ch, BYTE pos)
 
//Funkción belül itt:
    if (IsPCShop())
    {
        if (!pkSelectedItem)
        {
            sys_log(0, "Shop::Buy : Critical: This user seems to be a hacker : invalid pcshop item : BuyerPID:%d SellerPID:%d",
                    ch->GetPlayerID(),
                    m_pkPC->GetPlayerID());
 
            return false;
        }
 
        if ((pkSelectedItem->GetOwner() != m_pkPC))
        {
            sys_log(0, "Shop::Buy : Critical: This user seems to be a hacker : invalid pcshop item : BuyerPID:%d SellerPID:%d",
                    ch->GetPlayerID(),
                    m_pkPC->GetPlayerID());
 
            return false;
        }
    }
 
//Mindkét 'if'-en belül cseréld le ezt:
return false;
 
//Erre:
return SHOP_SUBHEADER_GC_SOLD_OUT;
 
http://epvpimg.com/brvDdab
