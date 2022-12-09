//
//  LandingArt.swift
//  Pawn2Queen
//
//  Created by Bernadette Hoffman on 10/11/22.
//  Picture only, referencing overlay text.

import SwiftUI

struct LandingArt: View {
    var body: some View {
        Image("Queen")
            .resizable()
            .renderingMode(.original)
            .aspectRatio(contentMode: .fit)
            .overlay(LandingOverlay(), alignment: .bottom)
    }
}

struct LandingArt_Previews: PreviewProvider {
    static var previews: some View {
        LandingArt()
    }
}
