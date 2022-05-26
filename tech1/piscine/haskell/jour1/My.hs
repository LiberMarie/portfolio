mySucc :: Int -> Int
mySucc x = x + 1

myIsNeg :: Int -> Bool
myIsNeg x = if x < 0 then True else False

myAbs :: Int -> Int
myAbs x = if x < 0 then  x * (-1) else x

myMin :: Int -> Int -> Int
myMin x y = if x < y then x else y

myMax :: Int -> Int -> Int
myMax x y = if x > y then x else y

myTuple :: a -> b -> (a, b)
myTuple a b = (a, b)

myTruple :: a -> b -> c -> (a, b, c)
myTruple a b c = (a, b, c)

myFst :: (a, b) -> a
myFst (a, b) = a

mySnd :: (a, b) -> b
mySnd (a, b) = b

mySwap :: (a, b) -> (b, a)
mySwap (a, b) = (b, a)

myHead :: [a] -> a
myHead [] = error "empty list"
myHead (a:_) = a


myTail :: [a] -> [a]
myTail [] = error "empty list"
myTail (a:as) = as

myLength :: [a] -> Int
myLength [] = 0
myLength (a:as) = myLength (as) + 1

myNth :: [a] -> Int -> a
myNth [] _ = error "empty list"
myNth (a:ax) x | x < 0 = error "out of range" 
                | myLength(ax) < x = error "out of range"
myNth (a:as) x = if x == 0 
    then a 
    else myNth as (x - 1)


myTake :: Int -> [a] -> [a]
myTake x [] = []
myTake 0 (a:as) = []
myTake 1 (a:as) = [a]
myTake x (a:as) 
                | x < 0 = (a:as)
                |otherwise = a : myTake (x - 1) as

myDrop :: Int -> [a] -> [a]
myDrop x [] = []
myDrop 0 (a:as) = (a:as)
myDrop 1 (a:as) = as
myDrop x (a:as) | x <= 0 = (a:as)
                | otherwise = myDrop (x - 1) as

myAppend :: [a] -> [a] -> [a]
myAppend [] (a:as) = (a:as)
myAppend [] [] = []
myAppend (a:as) [] = (a:as)
myAppend (a:as) x = a : myAppend as x

myReverse :: [a] -> [a]
myReverse [] = []
myReverse [a] = [a]
myReverse (a:as) = myLast(a:as) : myReverse (myInit(a:as))

myInit :: [a] -> [a]
myInit [] = error "empty list"
myInit (a:ab:[]) = [a]
myInit (a:[]) = []
myInit (a:as) = a : myInit as


myLast :: [a] -> a
myLast [] = error "empty list"
myLast [a] = a
myLast (a:as) = myLast as 

myZip :: [a] -> [b] -> [(a, b)]
myZip [] [] = []
myZip [a] [] = []
myZip [] [a] = []
myZip (a:as) (b:bs) | as == [] = [(a, b)]
                    | bs == [] = [(a, b)]
                    |otherwise = (a,b) : myZip as bs