import Data.Maybe
import Data.Char

myElem :: Eq a => a -> [a] -> Bool
myElem x [] = False
myElem x (a:as) = if x == a 
    then True 
    else myElem x as

safeDiv :: Int -> Int -> Maybe Int
safeDiv x 0 = Nothing
safeDiv x y = Just (div x y)

safeNth :: [a] -> Int -> Maybe a
safeNth [] _ = Nothing
safeNth (a:ax) x | x < 0 = Nothing
                | length(ax) < x = Nothing
safeNth (a:as) x = if x == 0 
    then Just a 
    else safeNth as (x - 1)

safeSucc :: Maybe Int -> Maybe Int
safeSucc x = fmap (+1) (x)

myLookup :: Eq a => a -> [(a,b)] -> Maybe b
myLookup x [] = Nothing
myLookup x ((a,b):abs) = if x == a
    then Just b
    else myLookup x abs

maybeDo :: (a-> b -> c) -> Maybe a -> Maybe b -> Maybe c
maybeDo fct Nothing y = Nothing
maybeDo fct x Nothing = Nothing
maybeDo fct (Just x) (Just y) = Just (fct x y)

readInt :: [Char] -> Maybe Int
readInt [] = Nothing
readInt (a:as) = if verifIsNumber((a:as)) == True
    then Just(read (a:as) :: Int)
    else Nothing

getLineLength :: IO Int
getLineLength = do 
    str <- getLine
    return (length str)

printAndGetLength :: String -> IO Int
printAndGetLength str = putStrLn str >>
    return (length (str))

printBox :: Int -> IO()
printBox x | x<= 0 = return()
            | x == 1 = putStrLn "++" >>
                return()
--printBox x = 

--concatLines :: Int -> IO String
--concatLines nb | nb <= 0 = return("")
--concatLines nb = do
--    | x == 0 = line
--    | otherwise = do-+
--        line <- getLine

verifIsNumber :: [Char] -> Bool
verifIsNumber [] = False
verifIsNumber (a:as)| isNumber a == False = False
                |as == [] = True
                |otherwise = verifIsNumber as
        
getInt :: IO (Maybe Int)
getInt = do 
    x <- getLine
    return (readInt x)
