#ifndef RNCYMView_h
#define RNCYMView_h
#import <React/RCTComponent.h>

#import <MapKit/MapKit.h>
#import <RNYMView.h>
@import YandexMapsMobile;

@class RCTBridge;

@interface RNCYMView: RNYMView<YMKClusterListener, YMKClusterTapListener>

@property (nonatomic, copy) RCTBubblingEventBlock _Nullable onMapLoaded;

- (void)setClusterColor:(UIColor*_Nullable)color;
- (void)setClusteredMarkers:(NSArray<YMKRequestPoint*>*_Nonnull)points;
- (void)setInitialRegion:(NSDictionary *_Nullable)initialRegion;
- (void)setLogoPosition:(NSDictionary *_Nullable)logoPosition;
- (void)setLogoPadding:(NSDictionary *_Nullable)logoPadding;

@end

#endif /* RNYMView_h */
