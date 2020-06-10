/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class VEKSong, MiroBlueprint, NSString;

@interface VEKBlueprint : NSObject <NSSecureCoding, NSCopying> {

	long long _mood;
	VEKSong* _song;
	long long _titleStyle;
	long long _editStyle;
	MiroBlueprint* _data;

}

@property (nonatomic,readonly) NSString * fontName; 
@property (nonatomic,readonly) long long mood;                   //@synthesize mood=_mood - In the implementation block
@property (nonatomic,copy) VEKSong * song;                       //@synthesize song=_song - In the implementation block
@property (assign,nonatomic) long long titleStyle;               //@synthesize titleStyle=_titleStyle - In the implementation block
@property (assign,nonatomic) long long editStyle;                //@synthesize editStyle=_editStyle - In the implementation block
@property (nonatomic,retain) MiroBlueprint * data;               //@synthesize data=_data - In the implementation block
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)moodIDForVEKMood:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(MiroBlueprint *)data;
-(void)setData:(MiroBlueprint *)arg1 ;
-(NSString *)fontName;
-(VEKSong *)song;
-(long long)mood;
-(void)setSong:(VEKSong *)arg1 ;
-(long long)titleStyle;
-(void)setTitleStyle:(long long)arg1 ;
-(id)initWithMood:(long long)arg1 ;
-(id)moodIDmap;
-(double)idealDurationForAsset:(id)arg1 ;
-(long long)editStyle;
-(long long)moodForMoodID:(id)arg1 ;
-(id)moodIDForMood:(long long)arg1 ;
-(void)setEditStyle:(long long)arg1 ;
@end

