import Data.List 

data Tree a = Empty | Node (Tree a) a (Tree a) deriving (Show)

addInTree :: Ord a => a -> Tree a -> Tree a
addInTree a Empty = Node Empty a Empty
addInTree a (Node g x d) = if a < x 
    then Node (addInTree a g) x d
    else Node g x (addInTree a d)

--task 13
--instance Functor Tree where
  --fmap function (Node l a r) = Node (fmap function l a r) (fmap function l a r) (fmap function Node l a r)

--task 14

---listToTree :: [a] -> Tree a
--listToTree [] = Empty
--listToTree (a:as) = foldr addInTree
  

--task 15
--treeToList :: Tree a -> [a]
--treeToList Empty = []
--treeToList (Node l a r) = map (x)

--task 16
treeSort :: Ord a => [a] -> [a]
treeSort [] = []
treeSort (a:as) = sort (a:as)