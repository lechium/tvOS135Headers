/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <Memories/VEiOSSharedObject.h>

@interface FaceRecognizer : VEiOSSharedObject {

	BOOL _highAccuracy;

}

@property (assign,nonatomic) BOOL highAccuracy;              //@synthesize highAccuracy=_highAccuracy - In the implementation block
+(id)sharedRecognizer;
-(id)facesInImage:(id)arg1 ;
-(CGRect)containingRectForFaces:(id)arg1 scaleEachFaceRectBy:(double)arg2 ;
-(CGRect)containingRect:(id)arg1 ;
-(BOOL)highAccuracy;
-(void)setHighAccuracy:(BOOL)arg1 ;
@end

