def solution(genres, plays):
    
    answer = []
    genresHash = {} 
    playHash = {} 
    count = 0
    for i in range(len(genres)):
        genre = genres[i]
        if genre in playHash:
            playHash[genre] += plays[i]
        else:
            playHash[genre] = plays[i]
        if genre in genresHash:
            genresHash[genre].append(count)
        else:
            genresHash[genre] = [count]
        count += 1
                   
    
    
    
    
    while (playHash):
        
    #Find the genre that the most played song belongs to
        playHistory = list(playHash.values())
        maxGenreIndex = playHistory.index(max(playHistory))
        genreList = list(playHash.keys())
        maxGenre = genreList[maxGenreIndex]
        songList = genresHash.get(maxGenre)
        
        
        if(len(songList) == 1):
            answer.append(songList[0])
            del playHash[maxGenre]
            continue
    #Find the most played two songs of the genre
        maxSong2 = 0
        index1 = 0
        maxSong1 = 0
        index2 = 0
        for i in songList:
            if plays[i] > maxSong1:
                maxSong2 = maxSong1
                index2 = index1
                maxSong1 = plays[i]
                index1 = i
            elif plays[i] <= maxSong1 and plays[i] > maxSong2:
                maxSong2 = plays[i]
                index2 = i
        print(index1)
        print(index2)
    #Check if two songs play counts are the same
        if maxSong1 == maxSong2 and index1 > index2:
            answer.append(index2)
            answer.append(index1)
        else: 
            answer.append(index1)
            answer.append(index2)
    
        del playHash[maxGenre]
            
    return answer
