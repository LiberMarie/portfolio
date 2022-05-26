data Item = Sword | Bow | MagicWand deriving (Eq)

instance Show Item where
    show Sword = "sword"
    show Bow = "bow" 
    show MagicWand = "magic wand"

data Mob = Mummy | Skeleton Item | Witch (Maybe Item) deriving (Eq)

instance Show Mob where
    show Mummy = "mummy"
    show (Skeleton Bow) = "doomed archer"
    show (Skeleton Sword) = "dead knight"
    show (Witch Nothing) = "witch"
    show (Witch (Just MagicWand)) = "sorceress"
    show (Skeleton x) = "skeleton holding a " ++ show x
    show (Witch (Just Bow)) = "witch holding a bow"
    show (Witch (Just Sword)) = "witch holding a sword"

createMummy :: Mob
createMummy = Mummy

createArcher :: Mob
createArcher = Skeleton Bow

createKnight :: Mob
createKnight = Skeleton Sword

createWitch :: Mob
createWitch = Witch Nothing

createSorceress :: Mob
createSorceress = Witch (Just MagicWand)

create :: String -> Maybe Mob
create "mummy" = (Just createMummy)
create "witch" = (Just createWitch)
create "doomed archer" = (Just createArcher)
create "dead knight" = (Just createKnight)
create "sorceress" = (Just createSorceress)
create _ = Nothing

equip :: Item -> Mob -> Maybe Mob
equip item (Skeleton _) = Just (Skeleton item)
equip item (Witch _) = Just (Witch (Just item))
equip item _ = Nothing

class HasItem a where
    getItem :: a -> Maybe Item
    hasItem :: a -> Bool

instance HasItem Mob where 
    getItem (Skeleton item) = Just item
    getItem (Mummy) = Nothing
    getItem (Witch Nothing) = Nothing
    getItem (Witch item) = item
    hasItem (Mummy) = False
    hasItem (Witch Nothing) = False
    hasItem (Skeleton _) = True
    hasItem (Witch _) = True